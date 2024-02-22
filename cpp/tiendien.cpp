#include <iostream>
using namespace std;

int main() {
	int dtt, thanhtien;
	int dinhmuc = 100;
	cout << "Nhap so dien tieu thu: "; cin >> dtt;
	if (dtt <= dinhmuc)
		thanhtien = 500 * dtt;
	else thanhtien = (dinhmuc * 500) + ((dtt-dinhmuc) * 800);
	cout << "Tong tien dien phai tra: " << thanhtien;
	return 0;
}
