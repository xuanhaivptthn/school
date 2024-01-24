#include <iostream>

using namespace std;

float gt(int x) {
	int tich = 1;
	for (int i=1; i<=x; i++) {
		tich = tich * i;
	}
	return tich;
}

int main () {
	int n;
	do {
		cout << "Nhap n: "; cin >> n;
		if (n<=0) {
			system("cls");
			cout << "N khong thoa man, moi nhap lai." << endl;
		}
	} while (n<=0);
	
	float s=0;
	for (int i=2; i<=2*n; i*=2) {
		s+=1/gt(i);
	}
	cout << "Gia tri = " << s << endl;
	return 0;
}
