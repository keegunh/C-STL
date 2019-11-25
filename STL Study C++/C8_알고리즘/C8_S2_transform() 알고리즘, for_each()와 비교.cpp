#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void Func_foreach(int& n) {
	n += 5;
}

int Func_transform(int n) {
	return n + 5;
}

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	// transform �� �Լ��� return ���� �־��� container(3��° ����,���⼭�� v)�� �Է����ش�. (return value �ʼ�)
	transform(v.begin(), v.end(), v.begin(), Func_transform);	

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	// for_each�� �Լ��� v�� ���� reference�� �޾Ƽ� �������ش�. (&��� �ʼ�)
	for_each(v.begin(), v.end(), Func_transform);				

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	return 0;
}