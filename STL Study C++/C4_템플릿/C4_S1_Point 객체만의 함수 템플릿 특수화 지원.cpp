#include <iostream>
using namespace std;

class Point {
	int x; 
	int y;
public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
};

template<typename T>
void Print(T a) {
	cout << a << endl;
}

template<>
void Print(Point a) {
	cout << "Print Ư��ȭ ����: ";
	a.Print();
}

int main() {
	int n = 10;
	double d = 2.5;
	Point pt(2, 3);

	Print(n);		// Print<int>() �Ϲ�ȭ ���� ȣ��
	Print(d);		// Print<double>() �Ϲ�ȭ ���� ȣ��
	Print(pt);		// Print<Point>() Ư��ȭ ���� ȣ�� 

	return 0;
}