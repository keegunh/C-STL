#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct PrintFunctor {
	char fmt;
public:
	explicit PrintFunctor(char c = ' ') :fmt(c) { }
	void operator()(int n) const {
		cout << n << fmt;
	}
};

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	for_each(v.begin(), v.end(), PrintFunctor());		// ���� ������ ' '��
	cout << endl;
	for_each(v.begin(), v.end(), PrintFunctor(','));	// ���� ������ ','��
	cout << endl;
	for_each(v.begin(), v.end(), PrintFunctor('\n'));	// ���� ������ '\n'��
	cout << endl;

	return 0;
}