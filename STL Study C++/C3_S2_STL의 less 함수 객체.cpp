#include <iostream>
#include <functional>	// less<> ���
using namespace std;

typedef less<int> Less;

int main() {
	Less l;

	cout << l(10, 20) << endl;						// �� ��ü�� �Ϲ��� �Լ� ȣ��
	cout << l(20, 10) << endl;						// �� ��ü�� �Ϲ��� �Լ� ȣ��
	cout << Less()(10, 20) << endl;					// �ӽ� ��ü�� �Ϲ��� �Լ� ȣ��
	cout << Less()(20, 10) << endl;					// �ӽ� ��ü�� �Ϲ��� �Լ� ȣ��
	cout << endl;

	cout << l.operator()(10, 20) << endl;			// ����� ȣ��
	cout << Less().operator()(10, 20) << endl;		// ����� ȣ��
}