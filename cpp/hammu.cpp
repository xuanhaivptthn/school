#include <iostream>
using namespace std;

int hammu(int x,int y) {
	int tich = 1;
	for (int i = 1; i<=y; i++)
		tich = tich * x;
	return tich;
}

int main() {
	int a,n;
	cout << "Nhap a, n: "; cin >> a >> n;
	cout << "Gia tri can tim: " << hammu(a,n) << endl;
	return 0;
}
