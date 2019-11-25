#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v.push_back(60);

	make_heap(v.begin(), v.end());
	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	v.push_back(35);
	cout << "v �������� 35 �߰� : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	push_heap(v.begin(), v.end());		// push_back() ���� �ٽ� v �� heap ������ ����� �� ���. make_heap()�� �ٽ� �ᵵ ���� ȿ���ε� �ϴ�.
	cout << "v[�� �߰�] ���� ���� : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	return 0;
}