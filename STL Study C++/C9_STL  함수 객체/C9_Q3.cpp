#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	cout << less<int>()(50, 100) << endl;
	// 50 < 100 이므로 참입니다. 왼쪽항을 50으로 고정합니다.
	cout << bind1st<less<int>>(less<int>(), 50)(100) << endl;
	// 100 < 50 이므로 거짓입니다. 오른쪽항을 50으로 고정합니다.
	cout << bind2nd<less<int>>(less<int>(), 50)(100) << endl;

	return 0;
}