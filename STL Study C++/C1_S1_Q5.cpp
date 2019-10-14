#include <iostream>
#include <cstring>

using namespace std;

//class String {
//	char buf[100];
//public:
//	String(const char* sz) {
//		strcpy_s(buf, sz);
//	}
//	void Print() const {
//		cout << buf << endl;
//	}
//};

class String {
	char* buf;
public:
	String(const char* sz) {
		buf = new char[strlen(sz) + 1];
	}

	String() {
		delete[] buf;
	}

	const String& operator=(const String& arg) {
		delete[] buf;
		buf = new char[strlen(arg.buf) + 1];
		strcpy(buf, arg.buf);
		return *this;
	}
};

int main() {
	const char* sz = "Hello!";
	String s("HI~!");
	s = sz; // s = String(sz);로 암묵적인 생성자를 이용한 타입 변환

	s.Print();

	return 0;
}