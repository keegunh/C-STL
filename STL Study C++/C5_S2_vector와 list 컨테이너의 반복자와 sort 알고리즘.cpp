#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int main() {
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	sort(v.begin(), v.end());		// ���İ��� (vector�� �������� �ݺ���)
	//sort(lt.begin(), lt.end());		// ����! (list�� ����� �ݺ���)

	// sort�� ���� ���� �ݺ��ڸ� �䱸! (vector�Ǵ� deque �ݺ���ó��)

	return 0;
}