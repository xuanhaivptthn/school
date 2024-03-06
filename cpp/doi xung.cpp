#include <iostream>
using namespace std;

int main () {
	int num;
	cout << "Nhap so: "; cin >> num;
	
	int first = num;
	int second = 0;
	do {
		if (first != 0) second = second * 10 + (first % 10);
		first = first / 10;
	} while (first != 0);
	if (num == second) cout << "So doi xung";
	else cout << "So khong doi xung";
	return 0;
}
