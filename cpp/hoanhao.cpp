#include <iostream>
using namespace std;

bool kt(int x) {
	int c=0;
		for (int i=1;i<x;i++)
			if (x%i==0)
				c+=i;
		if (c==x) return true;
		else return false;
}

int main () {
	int n;
	cout << "Nhap n: "; cin >> n;
	for(int i=1; i<=n; i++) {
		if (kt(i)==true) cout << i << " ";
	}
	return 0;
}