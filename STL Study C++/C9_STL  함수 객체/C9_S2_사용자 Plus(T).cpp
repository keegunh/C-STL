#include <iostream>
#include <functional>

using namespace std;

template <typename T>
struct Plus: public binary_function<T,T,T> {	// 어댑터 사용이 가능하게
	T operator()(const T& left, const T& right) const {
		return left + right;
	}
};

int main() {

	Plus<int> oPlus;
	// 1. oPlus 객체로 10, 20 더하기. 암묵적 호출
	cout << oPlus(10, 20) << endl;
	// 2. oPlus 객체로 10, 20 더하기. 명시적 호출
	cout << oPlus.operator()(10, 20) << endl;

	// 3. 임시 객체로 10, 20 더하기. 암묵적 호출
	cout << Plus<int>()(10, 20) << endl;
	// 4. 임시 객체로 10, 20 더하기. 명시적 호출
	cout << Plus<int>().operator()(10, 20) << endl;

	return 0;
}