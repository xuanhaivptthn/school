#include <iostream>
using namespace std;

int main () {
	int a,b,tich,r;
	cout << "Nhap a,b "; cin >> a >> b;
	tich=a*b;
	
	while (b!=0) {
		r = a % b;
		a = b;
		b = r;
	}
	
	cout << "UCLN: " << a << endl;
	cout << "BCNN: " << tich/a;
}
