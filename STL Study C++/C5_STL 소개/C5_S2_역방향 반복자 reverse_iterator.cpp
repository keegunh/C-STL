#include<iostream>
#include<vector>

using namespace std;

int main() {
	vector<int> v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for (vector<int>::iterator iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << " ";
	cout << endl;

	reverse_iterator<vector<int>::iterator> riter(v.end());
	reverse_iterator<vector<int>::iterator> end_riter(v.begin());
	for (; riter != end_riter; riter++)
		cout << *riter << " ";
	cout << endl;

	/*for (vector<int>::iterator iter2 = v.end(); iter2!= v.begin(); iter2++)		// 이렇게 하면 에러 발생. iterator은 무조건 순방향, reverse_iterator 은 무조건 역방향임
		cout << *iter2 << " ";
	cout << endl;*/
	return 0;
}