#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;

class Point {
	int x;
	int y;
public:
	explicit Point(int _x = 0, int _y = 0) : x(_x), y(_y) { }
	void Print() const { cout << x << ',' << y << endl; }
	int GetX() const { return x; }
	int GetY() const { return y; }
};

struct Adder {
	void operator() (Point& pt) const {
		pt = Point(pt.GetX() + 5, pt.GetY() + 5);
	}
};

struct Printer {
	void operator()(const Point& pt) const {
		pt.Print();
	}
};

int main() {

	vector<Point> v;
	v.push_back(Point(1, 1));
	v.push_back(Point(2, 2));
	v.push_back(Point(3, 3));
	v.push_back(Point(4, 4));
	v.push_back(Point(5, 5));

	// for_each()�� ȣ���Ͽ� ��� ������ x,y�� +5��ŭ ������ŵ�ϴ�.
	for_each(v.begin(), v.end(), Adder());
	for_each(v.begin(), v.end(), Printer());

	return 0;
}