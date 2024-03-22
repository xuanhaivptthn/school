#include <iostream>
using namespace std;

bool tamgiac(int x, int y, int z) {
	if (x+y>z&&y+z>x&&x+z>y) return true;
	else return false;
}

bool nguyento(int x) {
	int d = 0;
	for (int i = 2; i<=x/2; i++){
		if (x % i == 0)
			d = d + 1;	
	}
	if (d == 0) return true;
	else return false;
}

bool doixung(int x) {
	int luux = x;
	int y;
	while (x!=0) {
		y = (y*10) + (x%10);
		x = x / 10;
	}
	if (y == luux) return true;
	else return false;
}

int main() {
	int chon;
	cout << "Nhap lua chon 1 2 3:"; cin >> chon;
	switch (chon) {
		case 1: {
			int a,b,c;
			cout << "Nhap 3 canh: "; cin >> a >> b >> c;
			if (tamgiac(a,b,c)) cout << "Ba canh tam giac";
			else cout << "Khong phai ba canh tam giac";
			break;
		}
		case 2:{
			int n;
			cout << "Nhap n:"; cin >> n;
			for (int i = 2; i<=n; i++)
				if (nguyento(i)) cout << i << " ";
			break;
		}
		case 3: {
			int n;
			cout << "Nhap n:"; cin >> n;
			if (doixung(n)) cout << "So doi xung";
			else cout << "So khong doi xung";
			break;
		}
		default:
			cout << "Nhap sai";
	}
	return 0;
}
