#include <iostream>
#include <functional>
#include <algorithm>
#include <vector>
using namespace std;

template<typename T>
struct Plus {
	// binder1st<int>가 이항 함수자를 단항 함수자로 변환하기 위해 first_argument_type, second_argument_Type, result_type 형식 정의를 필요로 함.
	// 없으면 Plus<int>()에 binder1st<> 사용 시 에러 발생.
	typedef T first_argument_type;
	typedef T second_argument_type;
	typedef T result_type;

	// operator() 연산자 오버로딩 함수는 모두 const 함수여야 함.
	T operator()(const T& left, const T& right) const {		// const 넣지 않으면 컴파일 에러 발생함.
		return left + right;
	}
};


int main() {

	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	vector<int> v3(3);	// size: 3인 vector 생성
	// STL 조건자 plust<int> 사용
	//transform(v1.begin(), v1.end(), v3.begin(), binder1st<plus<int>>(plus<int>(), 100));

	// 사용자 정의 조건자 Plus<int> 사용
	transform(v1.begin(), v1.end(), v3.begin(), binder1st<Plus<int>>(Plus<int>(), 100));

	cout << "v1 : ";
	for (vector<int>::size_type i = 0; i < v1.size(); i++)
		cout << v1[i] << ' ';
	cout << endl;

	cout << "v3 : ";
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << ' ';
	cout << endl;

	return 0;
}
