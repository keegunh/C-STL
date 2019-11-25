#include <iostream>
#include <algorithm>
#include <numeric>
#include <vector>
#include <functional>
using namespace std;

bool Pred(int n) {
	return 30 <= n && n <= 40;
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

	cout << "30�̻� 40������ ���� ����: " << count_if(v.begin(), v.end(), Pred) << endl;
	// ������ ������. not1�� ����ͷ� �Լ� ��ü�� argument_type, result_type�� ���ǵ� �־�� ��!
	cout << "30�̻� 40���ϰ� �ƴ� ���� ����: " << count_if(v.begin(), v.end(), not1(Pred)) << endl;

	return 0;
}