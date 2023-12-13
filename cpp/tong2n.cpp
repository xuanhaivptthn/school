#include <iostream>
using namespace std;

int main() {
	int n,s,i=2;
	cout << "Nhap n: "; cin >> n;
	s=0;
	while (i<=2*n) {
		s=s+i;
		i=i+2;
	}
	cout << "Tong = " << s;
	return 0;
}
