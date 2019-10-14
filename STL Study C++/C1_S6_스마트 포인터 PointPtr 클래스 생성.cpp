#include <iostream>
using namespace std;

class Point {
	int x;
	int y;

public:
	Point(int _x = 0, int _y = 0) : x(_x), y(_y) {	}
	void Print() { cout << x << ',' << y << endl; }
};

class PointPtr {
	Point *ptr;

public:
	PointPtr(Point *p) : ptr(p) {  }
	~PointPtr() {
		delete ptr;
	}

	Point* operator->() const {
		return ptr;
	}

	Point& operator*() const {
		return *ptr;
	}
};

int main()
{
	//PointPtr p1 = new Point(2, 3); // 메모리 할당
	//PointPtr p2 = new Point(5, 5); // 메모리 할당

	//p1->Print(); // p1.operator->()->Print() 호출(서비스 사용)
	//p2->Print(); // p2.operator->()->Print() 호출(서비스 사용)



	Point *p1 = new Point(2, 3); // 일반 포인터
	PointPtr p2 = new Point(5, 5); // 스마트 포인터

	p1->Print(); // p1->Print() 호출
	p2->Print(); // p2.operator->()->Print() 호출
	cout << endl;

	(*p1).Print(); //(*p1).Print() 호출
	(*p2).Print(); // p2.operator*().Print(); 

	// p1의 소멸자에서 Point 동적 객체를 자동으로 메모리에서 제거
	// p2의 소멸자에서 Point 동적 객체를 자동으로 메모리에서 제거

	return 0;
}