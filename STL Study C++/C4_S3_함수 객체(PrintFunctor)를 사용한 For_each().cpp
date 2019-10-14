#include <iostream>
#include <string>
using namespace std;

template <typename iterT, typename Func>
void For_each(iterT begin, iterT end, Func pf) {

	while (begin != end)
	{
		pf(*begin++);
	}

	return;
}

template<typename T>
struct PrintFunctor {
	string sep;			// ��� ������ ����
	explicit PrintFunctor(string s = " ") : sep(s) { cout << "-"; }		// Functor �ӽ� �����ڴ� �� �� ȣ��ȴ�.
	void operator()(T data) {
		cout << data << sep;
	}
};

int main() {
	int arr[5] = { 10, 20, 30, 40, 50 };
	For_each(arr, arr + 5, PrintFunctor<int>());
	cout << endl;

	string sarr[3] = { "abc", "ABC", "Hello!" };
	For_each(sarr, sarr + 3, PrintFunctor<string>("*\n"));
	cout << endl;

	PrintFunctor<int>("1");
	return 0;
}