#include <iostream>
using namespace std;

int main () {
	int a,b,c,menu;
	cout << "Nhap a, b, c: "; cin >> a >> b >> c;
	system("cls");
	cout << "1. Tong a + b + c" << endl;
	cout << "2. Tich a * b * c" << endl;
	cout << "3. Giai phuong trinh ax + b = c" << endl;
	cin >> menu;
	switch (menu) {
		case 1: cout << "Tong a + b + c = " << a + b + c; break;
		case 2: cout << "Tich a * b * c = " << a * b * c; break;
		case 3: {
			if (a !=0) {
				float x = (c-b)/a;
				cout << "Nghiem cua phuong trinh la: " << x;
			}
			else if (b == c) cout << "Vo so nghiem";
			else cout << "Vo nghiem";
			break;
		}
	}
	return 0;
}
