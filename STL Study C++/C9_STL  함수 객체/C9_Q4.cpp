#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

struct Unary :public unary_function<int, bool> {	// ���� ������
	bool operator()(int arg) const {
		return arg < 100;	// 100���� ������ ��!
	}
};

struct Binary : public binary_function<int, int, bool> {
	bool operator()(int first, int second) const {
		return first == second;	// �� ���� ������ ��!
	}
};

int main() {

	cout << Unary()(50) << endl;
	// ���� �����ڸ� NOT�Ѵ�.
	cout << not1(Unary())(50) << endl;

	cout << Binary()(1, 1) << endl;
	// ���� �����ڸ� NOT�Ѵ�.
	cout << not2(Binary())(1, 1) << endl;

	return 0;
}