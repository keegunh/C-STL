#include <iostream>
#include <stack>
using namespace std;

int main() {

	stack<int> st;		// 컨테이너 형식은 vector, deque, list 가능. deque가 기본 컨테이너.
	//stack<int, vector<int>> st1;	// 이렇게 하면 vector 컨테이너 형식으로 생성 가능.

	st.push(10);
	st.push(20);
	st.push(30);

	while (!st.empty())
	{
		cout << st.top() << endl;
		st.pop();
	}

	return 0;
}