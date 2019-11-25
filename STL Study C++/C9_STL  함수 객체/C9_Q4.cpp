#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

struct Unary :public unary_function<int, bool> {	// 단항 조건자
	bool operator()(int arg) const {
		return arg < 100;	// 100보다 작으면 참!
	}
};

struct Binary : public binary_function<int, int, bool> {
	bool operator()(int first, int second) const {
		return first == second;	// 두 항이 같으면 참!
	}
};

int main() {

	cout << Unary()(50) << endl;
	// 단항 조건자를 NOT한다.
	cout << not1(Unary())(50) << endl;

	cout << Binary()(1, 1) << endl;
	// 이항 조건자를 NOT한다.
	cout << not2(Binary())(1, 1) << endl;

	return 0;
}