#include <iostream>
using namespace std;

int main () {
	int n;
	cout << "Nhap n: "; cin >> n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= i) {
			cout << j << " ";
			j++;
		}
		i++;
		cout << endl;
	}
	return 0;
}
