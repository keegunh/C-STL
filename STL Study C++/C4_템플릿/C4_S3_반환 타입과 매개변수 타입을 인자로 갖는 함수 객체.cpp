#include <iostream>
#include <string>
using namespace std;

template<typename RetType, typename ArgType>
class Functor {
public:
	RetType operator()(ArgType data) const {
		cout << data << endl;
		//cout << typeid(RetType()).name() << endl;
		return RetType();
	}
};

int main() {
	Functor<void, int> functor1;
	functor1(10);
	Functor<bool, string> functor2;
	functor2("Hello!");

	return 0;
}