#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(30);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	pair<vector<int>::iterator, vector<int>::iterator> iter_pair;
	iter_pair = equal_range(v.begin(), v.end(), 30);

	cout << "30 ������ ������ [iter_pair.first, iter_pair.second): ";
	for (vector<int>::iterator iter = iter_pair.first; iter != iter_pair.second; iter++)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}