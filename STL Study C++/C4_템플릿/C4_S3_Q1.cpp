#include <iostream>
using namespace std;

class MyType { };

template<typename T>
void Copy(T t[], const T s[], int size) {
//void Copy(T *t, const T *s, int size) {
	for (int i = 0; i < size; i++)
	{
		t[i] = s[i];
	}
}

template<typename T>
void PrintArr(T *a, int size) {
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr1[5] = { 10, 20, 30, 40, 50 };
	int arr2[5];
	// Copy(t, s, n) t:格利瘤 林家, s:家胶 林家, n:盔家 俺荐
	Copy(arr2, arr1, 5);
	PrintArr(arr2, 5);

	MyType myArr1[5];
	MyType myArr2[5];
	Copy(myArr2, myArr1, 5);

	return 0;
}