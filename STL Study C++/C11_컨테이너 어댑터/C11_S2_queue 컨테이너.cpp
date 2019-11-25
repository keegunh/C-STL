#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main() {

	queue<int, list<int>> q;	// 컨테이너 형식으로 list<int>를 사용하고 int형식의 원소를 저장하는 queue 생성. 컨테이너 형식은 deque, list만 가능.
	//queue<int> q;				// 기본 컨테이너 형식은 deque임. 
	q.push(10);
	q.push(20);
	q.push(30);

	while (!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}

	return 0;
}