#include <iostream>
using namespace std;

int main () {
	int s,n;
	s=0;
	cout << "Nhap n= "; cin >> n;
	for (int i=1;i<=n;i++) {
		s=s+i;
	}
	cout << "Tong S = " << s;
	return 0;
}
