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

	// ����� Less<>�� ����Ͽ� �����մϴ�.
	sort(v.begin(), v.end(), Less<int>());
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// Less<>�� bind1st<> ����͸� ����Ͽ� 30���� ū ù ��° ���Ҹ� ����մϴ�.
	cout << *find_if(v.begin(), v.end(), bind1st<Less<int>>(Less<int>(), 30)) << endl;	// find_if�� iter�� ��ȯ�ϹǷ� �տ� *�� ���̸� cout�� ��� ����.

}