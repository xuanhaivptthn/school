#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int n;
	int a[100];
	cout << "Nhap n = "; cin >> n;
	
	for (int i = 0; i<n;i++) {
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	
	for (int i = 0; i<n; i++) {
		for (int j=i; j<n; j++) {
			if (a[i]<a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	
	for (int i = 0; i<n; i++) {
		cout << a[i] << " ";
	}
	return 0;
}
