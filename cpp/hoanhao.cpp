#include <iostream>
using namespace std;

int main() {
	int n,c=0;
	cout << "Nhap n "; cin >> n;
		for (int i=1;i<n;i++)
			if (n%i==0)
				c+=i;
		if (c==n)
			cout << n << " la so hoan hao";
		else 
			cout << n << " khong la so hoan hao";
	return 0;
}
