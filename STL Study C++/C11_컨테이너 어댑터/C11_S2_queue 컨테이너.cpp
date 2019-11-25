#include <iostream>
#include <queue>
#include <list>
using namespace std;

int main() {

	queue<int, list<int>> q;	// �����̳� �������� list<int>�� ����ϰ� int������ ���Ҹ� �����ϴ� queue ����. �����̳� ������ deque, list�� ����.
	//queue<int> q;				// �⺻ �����̳� ������ deque��. 
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