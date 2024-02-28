#include <iostream>
using namespace std;

int main () {
	float x,y;
	char t;
	cout << "Nhap x: "; cin >> x;
	cout << "Nhap y: "; cin >> y;
	cout << "Nhap toan tu: "; cin >> t;
	switch (t) {
		case '+':
			cout << "Tong: " << x + y;
			break;
		case '-':
			cout << "Hieu: " << x-y;
			break;
		case '*':
			cout << "Tich: " << x*y;
			break;
		case '/':
			if (y==0) cout << "Khong chia duoc";
			else cout << "Thuong: " << x/y;
			break;
	}
	return 0;
}
