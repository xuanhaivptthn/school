#include <iostream>
#include <string.h> 
#include <iomanip>
#include <stdlib.h>
#define max 100

using namespace std; 

// nhap mang hai chieu
void nhap(float a[max][max], int m, int n) { 
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "]= ";
			cin >> a[i][j];
		}
	}
}

// xuat mang hai chieu
void xuat(float a[max][max], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << setw(5);
        }
      cout << endl;
    }
}

// chuyen vi ma tran
void chuyen_vi(int m, int n, float a[max][max]) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++)	{
            cout << a[i][j] << setw(5);
        }
        cout << endl;
    }
}

// tong cua cac phan tu trong mang
float sum(float a[max][max], int m, int n) {
    float s = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            s += a[i][j];
        }
    }
    return s;
}

//Tinh tong duong cheo chinh va duong cheo phu 
float tong_chinh_phu(float a[max][max], int n) {
	for(int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "a[" << i << "][" << j << "] = ";
			cin>>a[i][j];
		}
	}

	int tdcc = 0;
	for (int i = 0; i < n; i++)
		tdcc += a[i][i];
	
	int tdcp = 0;
	for (int i = 0; i < n; i++)
		tdcp += a[i][n-i-1];
	
	cout << "Tong duong cheo chinh: " << tdcc << endl;
	cout << "Tong duong cheo phu: " << tdcp << endl;
}

// Dem so phan tu am trong mang  
int soam(float a[max][max], int m, int n) {
	int dem = 0;
    	for (int i = 0; i < m; i++) {
        	for (int j = 0; j < n; j++) {
            	if (a[i][j] < 0) {
                	dem ++;
            	}
        	}
    	}
	return dem; 
}

// tim so lon nhat trong mang     
float min(float a[max][max], int m, int n) {
	int tg = a[0][0];
	for (int i = 0; i < m; i++) {
		for (int j=0; j < n ; j++) {
			if (a[i][j] > tg) {
				tg=a[i][j];
			}
		}
	}
	return tg;
}

//xau ki tu
void kitu(string str) {
    int count = 0;
	int i=0;
	while (str[i]!="") {
		count=+1;
	}
    cout << count;
}

int main() {
    int dau;
	cout << "---------------MENU---------------"<<endl;
	cout << "1. Mang hai chieu"<<endl;
	cout << "2. Xau ki tu"<<endl;
	cout << "----------------------------------"<<endl; 
	cout << "Nhap so ban muon chon: "; cin >> dau; 
	system("cls");

    switch (dau) { 
    case 1: {
		int m, n;
    	float a[max][max];
		cout << "Ban da chon mang hai chieu!!!" << endl;
		cout << "Nhap so hang cua ma tran: "; cin >> m; 
		cout << "Nhap so cot cua ma tran: "; cin >> n;  
		nhap(a, m, n);
		system("cls");
		cout << "---------------MENU---------------" << endl;
		cout << "a. Chuyen vi ma tran" << endl;
		cout << "b. Tinh tong cac so trong mang" << endl; 
		cout << "c. Dem so phan tu am trong mang" << endl;
		cout << "d. Tim so lon nhat trong mang" << endl; 
		if (m == n) cout << "e. Tinh trong duong cheo chinh va phu" << endl;
		cout << "----------------------------------" << endl; 
		char chon;
		cout << "Nhap y ban muon chon: "; cin >> chon; 
		system("cls");
		
		switch (chon) {
			case 'a': 
				cout << "Mang truoc chuyen vi" << endl;
				xuat(a, m, n);
				cout << "Mang sau chuyen vi" << endl;
			    chuyen_vi(m,n,a);
				break; 
			case 'b':
				cout << "Tong cac so cua ma tran la: " << sum(a,m, n);
				break;
			case 'c':
				cout << "so phan tu am trong mang la:" << soam(a, m, n);
				break;
			case 'd':
				cout << "So lon nhat trong mang la: " << min(a,m,n);
				break; 
			case 'e':
				tong_chinh_phu(a, n);
				break;
			default:
				cout << "Ban da nhap sai!!!" << endl;
				break;
		}
		break; 
	}
	}
}
