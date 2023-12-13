#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	cout << setw(10) << "i" << setw(15) << "a[i]" << setw(15) << "*(a+i)";
	cout << setw(15) << "&a[i]" << setw(15) << "a+i" << endl;
	
	for (int i = 0; i<10; i++) {
		cout << setw(10) << i << setw(15) << a[i] << setw(15) << *(a+i);
		cout << setw(15) << &a[i] << setw(15) << a+i << endl;
	}
	return 0;
}
