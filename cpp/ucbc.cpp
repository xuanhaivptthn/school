#include <iostream>
using namespace std;

int main () {
	int x,y;
	cout << "Nhap x, y: "; cin >> x >> y;
	int r;
	int a = x;
	int b = y;
	while (a!=0){
		r = a % b;
		a = b;
		b = r;
	}
	cout << "UCLN: " << a << endl;
	//cout << "BCNN: " << float(x*y/a) << endl;
	return 0;
}
