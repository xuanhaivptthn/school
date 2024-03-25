#include <iostream>
using namespace std;

bool kt(int x) {
	int c=0;
		for (int i=2; i <= x/2; i++)
			if (x%i==0) c+=1;
		if (c==0) return true;
		else return false;
}

int main () {
	int n;
	cout << "Nhap n: "; cin >> n;
	int d = 0;
	for(int i=600; i<=n; i++) {
		if (kt(i)==true) { 
			cout << i << " ";
			d +=1;
		}
	}
	cout << endl;
	cout << "Tong: " << d;
	return 0;
}