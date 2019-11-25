#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	vector<int> v1;
	v1.push_back(50);
	v1.push_back(40);
	v1.push_back(10);

	vector<int> v2;
	v2.push_back(60);
	v2.push_back(30);
	v2.push_back(20);

	vector<int> v3(6);

	sort(v1.begin(), v1.end());		// v1을 정렬합니다.
	sort(v2.begin(), v2.end());		// v2를 정렬힙니다.
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), v3.begin());
	for (vector<int>::size_type i = 0; i < v3.size(); i++)
		cout << v3[i] << endl;

	return 0;
}