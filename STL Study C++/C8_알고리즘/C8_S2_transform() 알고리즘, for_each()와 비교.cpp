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

	// transform 은 함수의 return 값을 주어진 container(3번째 인자,여기서는 v)에 입력해준다. (return value 필수)
	transform(v.begin(), v.end(), v.begin(), Func_transform);	

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	// for_each는 함수가 v의 값을 reference로 받아서 수정해준다. (&사용 필수)
	for_each(v.begin(), v.end(), Func_transform);				

	cout << "v : ";
	for (vector<int>::size_type i = 0; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl;

	return 0;
}