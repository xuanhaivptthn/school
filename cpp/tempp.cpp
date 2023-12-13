#include <iostream>
using namespace std;

int main() {
	float a;
	cout << "Nhap a = "; cin >> a;
	if (a > 2) {
		cout << "a phai nho hon 2";
		return 0;
	}
	if (a<=2){
		float s=0,i=1;
		while (s<a) {
			s=s+(1/i);
			if (s>a) break;
			i++;
		}	
		cout << "S = " << s << endl;
		cout << "n = " << i;
	}
	return 0;
}
