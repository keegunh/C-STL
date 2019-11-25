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

	// output stream에 v 의 모든 원소를 " " delimiter 으로 두고 출력한다.
	//copy(v.begin(), v.end(), ostream_iterator<int>(cout); -> 이렇게 하면 1020304050 으로 출력됨.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// find()로 30원소의 반복자를 찾고 가리키는 원소를 제거합니다.
	v.erase(find(v.begin(), v.end(), 30));

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}