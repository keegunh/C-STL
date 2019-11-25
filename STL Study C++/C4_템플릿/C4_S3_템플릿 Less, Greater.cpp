#include <iostream>
#include <functional>		// STL less �� greater ���
using namespace std;

template<typename T>
struct Less {
	bool operator()(T a, T b) const {
		return a < b;
	}
};

template<typename T>
struct Greater {
	bool operator()(T a, T b) const {
		return a > b;
	}
};

int main() {
	cout << Less<int>()(10, 20) << endl;	// ����� Less, Greater ���
	cout << Less<int>()(20, 10) << endl;
	cout << Greater<int>()(10, 20) << endl;
	cout << Greater<int>()(20, 10) << endl;
	cout << endl;

	cout << less<int>()(10, 20) << endl;		// STL�� less, greater ���
	cout << less<int>()(20, 10) << endl;
	cout << greater<int>()(10, 20) << endl;
	cout << greater<int>()(20, 10) << endl;
	cout << endl;
	return 0;
}