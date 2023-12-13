#include <iostream>
using namespace std;

int main () {
	int n,cneg=0;
	float sum=0,count=0;
	cout << "Nhap n "; cin >> n;
	while (n!=0) {
		count+=1;
		sum+=n;
		if (n<0)
			cneg+=1;
		cout << "Nhap n "; cin >> n;
	}
	
	cout << "Da nhap " << count << endl;
	cout << "TBC cac so da nhap = " << float(sum/count) << endl;
	cout << "So phan tu am la " << cneg;
	
	return 0;
}
