#include <iostream>

using namespace std;

template<typename T>
class Stack {
	T buf[100];
	int top;
public:
	Stack() :top(0){ }
	void Push(const T& data) {
		buf[top++] = data;
	}

	const T& Pop() {
		return buf[--top];
	}

	bool Empty() const {
		return top <= 0;
	}
};

int main() {
	Stack<int> st;
	st.Push(10);
	st.Push(20);
	st.Push(30);
	
	if (!st.Empty())
		cout << st.Pop() << endl; // 30
	if (!st.Empty())
		cout << st.Pop() << endl; // 20
	if (!st.Empty())
		cout << st.Pop() << endl; // 10

	return 0;
}