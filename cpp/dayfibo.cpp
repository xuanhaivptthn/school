#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "Nhap n = "; cin >> n;
	int a=1,b=1,t;
	cout << a << " " << b;
	for (int i=1;i<=n;i++) {
		t=a+b;
		a=b;
		b=t;
		cout << " " << t;
	}
	return 0;
}
