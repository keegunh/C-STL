#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	vector<int>::iterator iter = v.begin() + 1;
	vector<int>::const_iterator citer = iter;

	// vector<int>::reverse_iterator riter(iter)과 같다.
	reverse_iterator<vector<int>::iterator> riter(iter);
	// vector<int>::const_reverse_iterator criter(riter)과 같다.
	reverse_iterator<vector<int>::const_iterator> criter(riter);

	cout << "iter : " << *iter << endl;
	cout << "citer : " << *citer << endl;
	cout << "riter : " << *riter << endl;
	cout << "criter : " << *criter << endl;
	cout << "===================" << endl;

	//	역방향 반복자는 base() 멤버 함수를 사용하여 정방향 반복자로 형반환할 수 있습니다.
	cout << "riter.base() => iter : " << *riter.base() << endl;
	cout << "criter.base() => iter : " << *criter.base() << endl;

	return 0;
}