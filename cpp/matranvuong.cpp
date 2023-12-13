#include <iostream>

using namespace std;

void nhap(int a[][100], int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<n;j++) {
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
	}
}
void xuat(int a[][100], int n) {
		for (int i=0; i<n; i++) {
		for (int j=0; j<n;j++) {
			cout<<a[i][j];
}
int mainn() {
	int n;
	cout<<"Nhap vao so cot: "; cin>>n;
	cout<<"Nhap vao so hang: ";
}
