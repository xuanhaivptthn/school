#include <iostream>
#define max 100
ussing namespace std;

void nhap(float a[max][max], int m, int n) { 
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			cout << " a[" << i << "]["<<j<<"]=";
			cin >> a[i][j];
		}
	}
}

// xuat mang hai chieu
void xuat(float a[max][max], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(6) << a[i][j] << " ";
        }
      cout << endl;
    }
}

int main () {
	int m,n;
	int a[max][max]
	cout << "Nhap hang "; cin >> m;
	cout << "Nhap cot "; cin >> n;
	
	nhap(a,m,n);
	
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			
		}
	}
}

