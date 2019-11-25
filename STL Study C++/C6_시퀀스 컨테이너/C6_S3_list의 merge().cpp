#include <iostream>
#include <list>
using namespace std;

int main() {

	list<int> lt1;
	list<int> lt2;

	lt1.push_back(40);
	lt1.push_back(10);
	lt1.push_back(30);
	lt1.push_back(20);
	lt1.push_back(50);

	lt2.push_back(60);
	lt2.push_back(25);
	lt2.push_back(35);

	list<int>::iterator iter;
	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter << ' ';
	cout << endl;
	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter << ' ';
	cout << endl << "===============================" << endl;;

	lt1.sort();			// merge()�� lt1�� lt2�� ��� ������������ ���ĵǾ� �־�� ����� �� ����.
	lt2.sort();
	lt1.merge(lt2);		// lt2�� lt1���� �պ� ����. ���� ������ less


	cout << "lt1 : ";
	for (iter = lt1.begin(); iter != lt1.end(); iter++)
		cout << *iter << ' ';
	cout << endl;
	cout << "lt2 : ";
	for (iter = lt2.begin(); iter != lt2.end(); iter++)
		cout << *iter << ' ';
	cout << endl << "===============================" << endl;;

	return 0;
}