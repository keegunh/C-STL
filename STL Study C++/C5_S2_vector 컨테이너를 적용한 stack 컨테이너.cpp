#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	stack<int, vector<int>> st;			// vector �����̳ʸ� �̿��� stack �����̳� ����
	st.push(10);
	st.push(20);
	st.push(30);
	//cout << st.size() << endl;


	for (int i = st.size(); i > 0; i--)
	{
		cout << st.top() << endl;	// top ������ ���
		st.pop();					// top ������ ����
	}

	if (st.empty())
	{
		cout << "stack�� ������ ����" << endl;
	}
}