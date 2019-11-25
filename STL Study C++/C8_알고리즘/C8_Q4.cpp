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

	// output stream�� v �� ��� ���Ҹ� " " delimiter ���� �ΰ� ����Ѵ�.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	sort(v.begin(), v.end());	// v�� �����մϴ�.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	v.erase(unique(v.begin(), v.end()), v.end());
	// ���Ҹ� ����ũ�ϰ� ����� size�� 8���� ����ϴ�.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}