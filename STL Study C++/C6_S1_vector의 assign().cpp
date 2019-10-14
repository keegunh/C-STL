#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v(5, 1);	// �ʱ갪 1�� 5���� ���Ҹ� ���� �����̳� ����

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(4, 2);		// 4���� ���Ұ��� 2�� �Ҵ�

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(6, 3);		// 6���� ���Ұ��� 3�� �Ҵ�

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(1, 4);		// 1���� ���Ұ��� 4�� �Ҵ�

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;


	vector<int>(v).swap(v);		// �ӽ� �����ڷ� v�� ���Ҹ� ��� �����ϰ� �ű� ������ v�� swap �Ѵ�.
	// vector<int> tmp(v); v.swap(tmp); // �� �ڵ�� ����.
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;






	return 0;
}