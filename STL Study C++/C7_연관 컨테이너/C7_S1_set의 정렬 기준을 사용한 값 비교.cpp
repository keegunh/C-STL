#include <iostream>
#include <set>
using namespace std;

int main() {

	set<int, less<int>> s;		// 정렬 기준 less

	// 30과 50 비교
	cout << (!s.key_comp()(30, 50) && !s.key_comp()(50, 30)) << endl;	// 다르다
	cout << (!s.key_comp()(30, 30) && !s.key_comp()(30, 30)) << endl;	// 같다	

	return 0;
}