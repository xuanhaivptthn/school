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
	for(int i=2; i<=n; i++) {
		if (kt(i)==true) cout << i << " ";
	}
	return 0;
}