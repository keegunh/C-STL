#include <iostream>
#include <functional>

using namespace std;

template <typename T>
struct Plus: public binary_function<T,T,T> {	// ����� ����� �����ϰ�
	T operator()(const T& left, const T& right) const {
		return left + right;
	}
};

int main() {

	Plus<int> oPlus;
	// 1. oPlus ��ü�� 10, 20 ���ϱ�. �Ϲ��� ȣ��
	cout << oPlus(10, 20) << endl;
	// 2. oPlus ��ü�� 10, 20 ���ϱ�. ����� ȣ��
	cout << oPlus.operator()(10, 20) << endl;

	// 3. �ӽ� ��ü�� 10, 20 ���ϱ�. �Ϲ��� ȣ��
	cout << Plus<int>()(10, 20) << endl;
	// 4. �ӽ� ��ü�� 10, 20 ���ϱ�. ����� ȣ��
	cout << Plus<int>().operator()(10, 20) << endl;

	return 0;
}