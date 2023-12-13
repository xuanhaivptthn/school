#include <iostream>
using namespace std;

void swap (int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main () {
	int x = 25, y = 50;
	swap(x,y);
	int *ptr;
	
	cout << x << " " << y << endl;
	
	// gán address x vào ptr
	ptr = &x;
	// gia tri cua bien co dia chi ptr + 100
	*ptr = *ptr + 100;
	ptr = &y;
	*ptr = *ptr +100;
	cout << x << " " << y;
	return 0;
	//cout << static_cast<void*>(&c);
}
