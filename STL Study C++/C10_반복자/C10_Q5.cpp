#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
using namespace std;

int main() {

	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);

	// copy() 알고리즘
	copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	return 0;
}