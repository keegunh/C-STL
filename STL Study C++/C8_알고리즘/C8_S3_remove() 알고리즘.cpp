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

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	vector<int>::iterator iter_end;
	iter_end = remove(v.begin(), v.end(), 30);
	// 30 삭제할 때 40이 30을 덮어쓰고 50이 원래 40을 덮어쓰기 때문에 50이 v에 두개 있게 된다.
	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	cout << "remove 후 [v.begin(), iter_end) 순차열: ";
	for (vector<int>::iterator iter = v.begin(); iter != iter_end; iter++)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}