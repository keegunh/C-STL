#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool Greater(int left, int right) {
	return left > right;
}

int main() {

	vector<int> v;
	v.push_back(30);
	v.push_back(50);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(10);
	v.push_back(40);

	cout << "v[���� ��]: ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	stable_sort(v.begin(), v.end());
	cout << "v[���� less]: ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	stable_sort(v.begin(), v.end(), Greater);
	//stable_sort(v.begin(), v.end(), greater<int>());
	sort(v.begin(), v.end(), Greater);
	cout << "v[���� greater]: ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	return 0;
}