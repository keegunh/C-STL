#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);
	v.push_back(70);
	v.push_back(80);
	v.push_back(90);
	v.push_back(100);

	// output stream에 v 의 모든 원소를 " " delimiter 으로 두고 출력한다.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	rotate(v.begin(), v.begin() + v.size() / 2 + 1, v.end());

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}