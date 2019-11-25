#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	for (int i = 0; i < 100; i++)
		v.push_back(rand()%1000);

	nth_element(v.begin(), v.begin() + 20, v.end());	// �������� ascending ������ �������� �� 20��°�� ���� ���ڴ� v[v.begin()+20].
														// �׸��� v[v.begin()+20]�� �������� ���� 20���� ���� 80���� ���� �� ����.
	cout << "v[���� 20��] : ";
	for (vector<int>::size_type i = 0; i < 20; i++)
		cout << v[i] << ' ';
	cout << endl;

	cout << "v[���� 80��] : ";
	for (vector<int>::size_type i = 20; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl << endl;


	
	// �ٸ� ��� ��� ����
	// index : 0��° �ڸ��� Ȯ���� �� ������ ������ ����(���� ���� ��)
	nth_element(v.begin(), v.begin() + 0, v.end());
	cout << "v[0](���� ���� ��): " << v[0] << endl;

	// index : 1��° �ڸ��� Ȯ���� �� ������ ������ ����(�ι�°�� ���� ��)
	nth_element(v.begin(), v.begin() + 1, v.end());
	cout << "v[1](�� ��°�� ���� ��): " << v[1] << endl;

	// index : �߰� �ڸ��� Ȯ���� �� ������ ������ ����(�߰���)
	nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
	cout << "v[v.size() / 2](�߰���): " << v[v.size() / 2] << endl;

	// index : �� �� �ڸ��� Ȯ���� �� ������ ������ ����(���� ū ��)
	nth_element(v.begin(), v.end() - 1, v.end());
	cout << "v[v.size() - 1](���� ū ��): " << v[v.size() - 1] << endl;

	// index : �� �� �ڸ��� Ȯ���� �� ������ ������ ����(�ι�°�� ū ��)
	nth_element(v.begin(), v.end() - 1, v.end());
	cout << "v[v.size() - 2](�� ��°�� ū ��): " << v[v.size() - 2] << endl;
	   
	return 0;
}