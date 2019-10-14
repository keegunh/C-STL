#include <iostream>
using namespace std;

////////////// ���� ///////////////
// �迭�� ��� ���ҿ� �ݺ����� �۾��� �����ϰ� �߻�ȭ��(��ü���� �۾��� ����)
void For_each(int *begin, int *end, void(*pf)(int)) {
	while (begin != end)
	{
		pf(*begin++);	// Ŭ���̾�Ʈ �Լ� ȣ��(�ݹ�)
	}
}

////////////// Ŭ���̾�Ʈ /////////
void Print1(int n) {	// ������ �̿��� ���Ҹ� ���
	cout << n << ' ';
}

void Print2(int n) {	// �� ���Ҹ� ������ ���
	cout << n * n << " ";
}

void Print3(int n) {	// ���ڿ��� endl�� �̿��� ���Ҹ� ���
	cout << "���� : " << n << endl;
}

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };

	For_each(arr, arr + 5, Print1);	// Print1() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print2);	// Print2() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;
	For_each(arr, arr + 5, Print3);	// Print3() �ݹ� �Լ��� �ּҸ� ����
	cout << endl << endl;

	return 0;
}