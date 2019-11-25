#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int> v2(v.begin(), v.end());
	// ������ [v.begin(), v.end())�� v2�� �ʱ�ȭ

	for (vector<int>::iterator iter = v2.begin(); iter != v2.end(); iter++)
		cout << *iter << ' ';		// v2 ���
	cout << endl;

	vector<int> v3;
	v3.assign(v.begin(), v.end());
	// v3�� ������ [v.begin(), v.end())�� �Ҵ�
	for (vector<int>::iterator iter = v3.begin(); iter != v3.end(); iter++)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}