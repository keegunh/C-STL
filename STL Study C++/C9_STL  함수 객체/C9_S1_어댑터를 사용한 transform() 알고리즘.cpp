#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v3(3);	// size: 3�� vector ����
	// STL ������ plus<int> ���
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int>>(plus<int>(), 100));
	// ����� ���� ������ Plus<Int> ���
	// transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int>>(Plust<int>(), 100));

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << ' ';
	cout << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;



	return 0;
}