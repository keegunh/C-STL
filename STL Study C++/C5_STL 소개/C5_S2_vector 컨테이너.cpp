#include <iostream>
#include <vector>
using namespace std;

int main() {
	// int Ÿ��(����)�� �����ϴ� �����̳� v�� �����մϴ�.
	vector<int> v;

	v.push_back(10);	// v�� ���� 10 �߰�
	v.push_back(20);	// v�� ���� 20 �߰�
	v.push_back(30);	// v�� ���� 30 �߰�
	v.push_back(40);	// v�� ���� 40 �߰�
	v.push_back(50);	// v�� ���� 50 �߰�

	for (unsigned int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;	// v[i]�� i��° index�� ���� ��ȯ
	}

	return 0;
}