#include <iostream>
using namespace std;

struct sv {
	char msv[10];
	char hoten[30];
	char que[30];
	float diemlt;
	float diemth;
};

void nhap_sv(int n, sv a[]) {
	cout << "So sinh vien can nhap: "; cin >> n;
	
	for (int i=0; i<n; i++) {
		system("cls");
		cin.ignore();
		cout << "Sinh vien thu " << i+1 << endl;
		cout << "Ma SV: "; cin.getline(a[i].msv,10);
		cout << "Ho ten: "; cin.getline(a[i].hoten,30);
		cout << "Que quan: "; cin.getline(a[i].que,30);
		cout << "Diem ly thuyet: "; cin >> a[i].diemlt;
		cout << "Diem thuc hanh: "; cin >> a[i].diemth;
	}
}

void xuat_sv(int n, sv a[]) {
	cout << "Ma SV \t Ho ten \t Que quan \t Diem ly thuyet \t Diem thuc hanh" << endl;
	for (int i=0; i<n; i++) {
		cout << a[i].msv << " " << a[i].hoten << " " << a[i].que << " " << a[i].diemlt << " " << a[i].diemth << endl;
	}
}

int main () {
	int n;
	sv a[100];
	nhap_sv(n, a);
	xuat_sv(n, a);
	return 0;
}
