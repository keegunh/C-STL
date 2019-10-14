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

	//pt = 10; // Point(10, 0) 암시적 생성자 호출
	//pt.Print();

	Point pt;
	pt.Print();
	// pt = 10;		// 에러! 암시적 생성자 호출이 불가능!
	pt = Point(10);	// 명시적 생성자 호출만 가능!
	pt.Print();

	return 0;
}