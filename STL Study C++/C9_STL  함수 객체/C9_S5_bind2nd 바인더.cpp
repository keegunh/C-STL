#include <iostream>
#include <functional>
using namespace std; 

int main() {

	// less�� �� ��° ���ڸ� 10���� ������ ���� ������ binder ����
	binder2nd<less<int>> binder = bind2nd(less<int>(), 10);

	// binder�� �ι�° ���ڸ� 10���� ������ less
	cout << binder(5) << ":" << less<int>()(5, 10) << endl;
	cout << binder(10) << ":" << less<int>()(10, 10) << endl;
	cout << binder(20) << ":" << less<int>()(20, 10) << endl;

	cout << bind2nd<less<int>>(less<int>(), 10)(5) << ":" << less<int>()(5, 10) << endl;
	cout << bind2nd<less<int>>(less<int>(), 10)(10) << ":" << less<int>()(10, 10) << endl;
	cout << bind2nd<less<int>>(less<int>(), 10)(20) << ":" << less<int>()(20, 10) << endl;

	return 0;
}