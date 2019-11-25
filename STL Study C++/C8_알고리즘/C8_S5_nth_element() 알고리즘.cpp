#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	vector<int> v;
	for (int i = 0; i < 100; i++)
		v.push_back(rand()%1000);

	nth_element(v.begin(), v.begin() + 20, v.end());	// 순차열을 ascending 순으로 정렬했을 때 20번째로 작은 숫자는 v[v.begin()+20].
														// 그리고 v[v.begin()+20]을 기점으로 상위 20개와 하위 80개를 나눌 수 있음.
	cout << "v[상위 20개] : ";
	for (vector<int>::size_type i = 0; i < 20; i++)
		cout << v[i] << ' ';
	cout << endl;

	cout << "v[하위 80개] : ";
	for (vector<int>::size_type i = 20; i < v.size(); i++)
		cout << v[i] << ' ';
	cout << endl << endl;


	
	// 다른 사용 방법 예시
	// index : 0번째 자리가 확정날 때 까지만 정렬을 진행(가장 작은 값)
	nth_element(v.begin(), v.begin() + 0, v.end());
	cout << "v[0](가장 작은 값): " << v[0] << endl;

	// index : 1번째 자리가 확정날 때 까지만 정렬을 진행(두번째로 작은 값)
	nth_element(v.begin(), v.begin() + 1, v.end());
	cout << "v[1](두 번째로 작은 값): " << v[1] << endl;

	// index : 중간 자리가 확정날 때 까지만 정렬을 진행(중간값)
	nth_element(v.begin(), v.begin() + v.size() / 2, v.end());
	cout << "v[v.size() / 2](중간값): " << v[v.size() / 2] << endl;

	// index : 맨 끝 자리가 확정날 때 까지만 정렬을 진행(가장 큰 값)
	nth_element(v.begin(), v.end() - 1, v.end());
	cout << "v[v.size() - 1](가장 큰 값): " << v[v.size() - 1] << endl;

	// index : 맨 끝 자리가 확정날 때 까지만 정렬을 진행(두번째로 큰 값)
	nth_element(v.begin(), v.end() - 1, v.end());
	cout << "v[v.size() - 2](두 번째로 큰 값): " << v[v.size() - 2] << endl;
	   
	return 0;
}