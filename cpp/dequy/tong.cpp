#include <iostream>
using namespace std;

int tong(int x) {
    if (x <= 0) 
        return 0;
    return tong(x-1) + x;
}

int main () {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong cac so tu 1 den " << n << " la: " << tong(n) << endl;
    return 0;
}