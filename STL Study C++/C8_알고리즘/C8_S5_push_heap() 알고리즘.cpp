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
	v.push_back(60);

	make_heap(v.begin(), v.end());
	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	v.push_back(35);
	cout << "v 순차열에 35 추가 : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	push_heap(v.begin(), v.end());		// push_back() 이후 다시 v 를 heap 구조로 만드는 데 사용. make_heap()을 다시 써도 같은 효과인듯 하다.
	cout << "v[힙 추가] 연산 수행 : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	return 0;
}