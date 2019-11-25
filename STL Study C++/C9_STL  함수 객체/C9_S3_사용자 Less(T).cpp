#include <iostream>
#include <functional>
using namespace std;

template<typename T>
struct Less : public binary_function<T, T, bool> {
	bool operator()(const T& left, const T& right) const {
		return left < right;
	}
};

int main() {

	Less<int> oLess;
	cout << oLess(10, 20) << endl;
	cout << oLess.operator()(10, 20) << endl;

	cout << Less<int>()(10, 20) << endl;	// 대부분 이 방법으로 사용됨.
	cout << Less<int>().operator()(10, 20) << endl;
	
	return 0;
}