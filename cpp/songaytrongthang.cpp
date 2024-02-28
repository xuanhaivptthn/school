#include <iostream>
using namespace std;

int main() {
	int t;
	cout << "Nhap thang: "; cin >> t;
	switch (t) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: {
		cout << "Thang co 31 ngay";
		break;
	}
	case 2: {
		int n;
		cout << "Nhap nam: "; cin >> n;
		if (n%4 == 0 && n % 100 != 0 || n % 400 == 0){
			cout << "Thang co 29 ngay";
		}
		else cout << "Thang co 28 ngay";
		break;
	}
	default: cout << "Thang co 30 ngay";
	}
	return 0;
}
