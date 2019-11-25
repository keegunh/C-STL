#include <iostream>
#include <functional>	// less<> 헤더
using namespace std;

typedef less<int> Less;

int main() {
	Less l;

	cout << l(10, 20) << endl;						// ㅣ 객체로 암묵적 함수 호출
	cout << l(20, 10) << endl;						// ㅣ 객체로 암묵적 함수 호출
	cout << Less()(10, 20) << endl;					// 임시 객체로 암묵적 함수 호출
	cout << Less()(20, 10) << endl;					// 임시 객체로 암묵적 함수 호출
	cout << endl;

	cout << l.operator()(10, 20) << endl;			// 명시적 호출
	cout << Less().operator()(10, 20) << endl;		// 명시적 호출
}