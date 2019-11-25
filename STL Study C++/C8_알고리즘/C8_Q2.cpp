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

	// output stream�� v �� ��� ���Ҹ� " " delimiter ���� �ΰ� ����Ѵ�.
	//copy(v.begin(), v.end(), ostream_iterator<int>(cout); -> �̷��� �ϸ� 1020304050 ���� ��µ�.
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// find()�� 30������ �ݺ��ڸ� ã�� ����Ű�� ���Ҹ� �����մϴ�.
	v.erase(find(v.begin(), v.end(), 30));

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}