#include <iostream>
using namespace std;

class Point {
	int x;
	int y;

public:
	//Point(int _x = 0, int _y = 0) : x(_x), y(_y) {	}
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) {	}
	void Print() { cout << x << ',' << y << endl; }
};


int main()
{
	//Point pt;
	//pt.Print();

	//pt = 10; // Point(10, 0) �Ͻ��� ������ ȣ��
	//pt.Print();

	Point pt;
	pt.Print();
	// pt = 10;		// ����! �Ͻ��� ������ ȣ���� �Ұ���!
	pt = Point(10);	// ����� ������ ȣ�⸸ ����!
	pt.Print();

	return 0;
}