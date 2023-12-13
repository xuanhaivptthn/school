#include <iostream>
using namespace std;

int main () {
	int A[5] = {1, 2, 3, 4, 5};
	int *ptr;
	ptr = A;
	//cout << &ptr << endl; //pointer address
	cout << A << endl; // array address
	cout << &ptr[4] << endl; // variable address
	//cout << ptr[2] << endl; // 3rd number
	cout << A + 4
}
