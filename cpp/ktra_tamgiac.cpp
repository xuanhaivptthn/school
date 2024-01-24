#include <iostream>
using namespace std;

int main () {
	int a,b,c;
	cout << "Nhap a, b, c: "; cin >> a >> b >> c;
	
	if (a+b>c&&b+c>a&&c+a>b) {
		if (a==b&&b==c) cout << "Tam giac deu";
		else if (a==b||b==c||a==c) cout << "Tam giac can";
		else if (a*a+b*b==c*c||b*b+c*c==a*a||a*a+c*c==b*b) cout << "Tam giac vuong";
		else cout << "Tam giac thuong";
	}
	else cout << "Khong la tam giac";
	return 0;
}
