#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <functional>
using namespace std;

template<typename T>
struct Less : public binary_function<T, T, T> {
	bool operator()(const T& left, const T& right) const {
		return left < right;
	}
};

int main() {

	vector<int> v;
	v.push_back(30);
	v.push_back(10);
	v.push_back(20);
	v.push_back(50);
	v.push_back(40);

	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// 사용자 Less<>를 사용하여 정렬합니다.
	sort(v.begin(), v.end(), Less<int>());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Less<>에 bind1st<> 어댑터를 사용하여 30보다 큰 첫 번째 원소를 출력합니다.
	cout << *find_if(v.begin(), v.end(), bind1st<Less<int>>(Less<int>(), 30)) << endl;	// find_if는 iter를 반환하므로 앞에 *를 붙이면 cout에 출력 가능.

}