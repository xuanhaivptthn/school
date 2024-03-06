#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int a, b, c, menu;
	cout << "Nhap 3 so a; b; c: "; cin >> a >> b >> c;
	system("cls");
	cout << "1. Kiem tra 3 canh tam giac" << endl;
	cout << "2. Giai phuong trinh bac 2" << endl;
	cout << "3. Tim max, min" << endl;;
	cout << "================================================================================" << endl;
	cout << "Nhap lua chon: "; cin >> menu;
	switch (menu) {
		case 1: {
			system("cls");
			if (a + b > c && b + c > a && c + a > b) cout << "3 so co the tao thanh canh cua tam giac" << endl;
			else cout << "3 so khong the tao thanh canh cua tam giac";
			break;
		}
		case 2: {
			system("cls");
			float delta;
			if (a ==0) cout << float(-c/b);
			else {
				delta = b*b - 4 * a * c;
				if (delta < 0) cout << "Phuong trinh vo nghiem" << endl;
				if (delta == 0) cout << "Phuong trinh co nghiem kep x = " << float(-b/2*a) << endl;
				if (delta > 0) {
					int x1 = (-b + sqrt(delta))/2*a;
					int x2 = (-b - sqrt(delta))/2*a;
					cout << "Phuong trinh co 2 nghiem x1 = " << x1 << " va x2 = " << x2 << endl;
				}				
			}
			break;
		}
		case 3: {
			system("cls");
			int max = a;
			if (max < b) max = b;
			if (max < c) max = c;
			int min = a;
			if (min > b) min = b;
			if (min > c) min = c;
			
			cout << "So lon nhat: " << max << endl;
			cout << "So nho nhat: " << min << endl;
			break;
		}
	}
	return 0;
}
