#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	cout << less<int>()(50, 100) << endl;
	// 50 < 100 �̹Ƿ� ���Դϴ�. �������� 50���� �����մϴ�.
	cout << bind1st<less<int>>(less<int>(), 50)(100) << endl;
	// 100 < 50 �̹Ƿ� �����Դϴ�. ���������� 50���� �����մϴ�.
	cout << bind2nd<less<int>>(less<int>(), 50)(100) << endl;

	return 0;
}