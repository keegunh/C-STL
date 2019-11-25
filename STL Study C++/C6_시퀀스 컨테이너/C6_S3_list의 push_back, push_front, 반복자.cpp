#include <iostream>
#include <list>
using namespace std;

int main() {
	
	list<int> lt;
	
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << ' ';
	cout << endl;

	lt.push_front(100);
	lt.push_front(200);

	for (list<int>::iterator iter = lt.begin(); iter != lt.end(); iter++)
		cout << *iter << ' ';
	cout << endl;

	return 0;
}