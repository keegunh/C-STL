#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v(5);

	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	vector<int>().swap(v);
	// �⺻ �����ڷ� ���� vector�����̳ʿ� v �����̳ʸ� swap�Ѵ�.
	cout << "size: " << v.size() << " capacity: " << v.capacity() << endl;

	return 0;
}