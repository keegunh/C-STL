#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(70);
	v.push_back(20);
	v.push_back(32);
	v.push_back(40);
	v.push_back(33);
	v.push_back(60);
	v.push_back(32);
	v.push_back(33);
	v.push_back(90);
	v.push_back(50);

	// output stream에 v 의 모든 원소를 " " delimiter 으로 두고 출력한다.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(v.begin(), v.end());	// v를 정렬합니다.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.erase(unique(v.begin(), v.end()), v.end());
	// 원소를 유니크하게 만들고 size를 8개로 만듭니다.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}