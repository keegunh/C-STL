#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> v(5, 1);	// 초깃값 1의 5개의 원소를 갖는 컨테이너 생성

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(4, 2);		// 4개의 원소값을 2로 할당

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(6, 3);		// 6개의 원소값을 3로 할당

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;

	v.assign(1, 4);		// 1개의 원소값을 4로 할당

	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;


	vector<int>(v).swap(v);		// 임시 생성자로 v의 원소를 모두 복사하고 신규 생성된 v와 swap 한다.
	// vector<int> tmp(v); v.swap(tmp); // 이 코드와 같다.
	for (vector<int>::size_type i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
	cout << "size : " << v.size() << ", capacity : " << v.capacity() << endl;
	cout << endl;






	return 0;
}