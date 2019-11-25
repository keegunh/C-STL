#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	stack<int, vector<int>> st;			// vector 컨테이너를 이용한 stack 컨테이너 생성
	st.push(10);
	st.push(20);
	st.push(30);
	//cout << st.size() << endl;


	for (int i = st.size(); i > 0; i--)
	{
		cout << st.top() << endl;	// top 데이터 출력
		st.pop();					// top 데이터 삭제
	}

	if (st.empty())
	{
		cout << "stack에 데이터 없음" << endl;
	}
}