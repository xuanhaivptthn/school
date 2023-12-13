#include <iostream>
using namespace std;

int main() {
	int n,c=0;
	cout << "Nhap n "; cin >> n;
	
	if (n==1) {
		cout << n << " khong la so nguyen to";
	}
	else
		{
			for (int i=2;i<n;i++)
				if (n%i==0)
					c+=1;
			if (c==0)
				cout << n << " la so nguyen to";
			else 
				cout << n << " khong la so nguyen to";
		}
	return 0;
}
