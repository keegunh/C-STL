#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main() {

	vector<int> v;
	
	// ǥ�� �Է� ��Ʈ������ ������ �Է¹޾� v�� ����
	copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter<vector<int>>(v));

	cout << "v : ";
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	// ������ ��Ʈ�� �� (Ctrl-D)���� �Է� �޾� ȭ�鿡 ���
	// copy(istream_iterator<int>(cin), istream_iterator<int>(), ostream_iterator<int>(cout, " "));

	return 0;
}