#include <iostream>
using namespace std;
 
void nhap(){
	// Ho ten; Nam sinh; Lop; Ma SV; Que quan; Gioi tinh
	char hoten[100];
	int namsinh;
	char lop[100];
	int msv;
	char que[100];
	bool gt;
	
	cout << "Nhap Ho ten: "; cin.getline(hoten,100);
	cout << "Nhap nam sinh: "; cin >> namsinh;
	cout << "Nhap lop: "; cin.getline(lop,100);
	cout << "Nhap Ma SV: "; cin >> msv;
	cout << "Nhap Que quan: "; cin.getline(que,100);
	cout << "Nhap gioi tinh. Nam nhap 0; Nu nhap 1: "; cin >> gt;
	
}
