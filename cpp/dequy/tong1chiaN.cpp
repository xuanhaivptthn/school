#include <iostream>
using namespace std;

float tong(int x) {
    if (x == 1)
        return 1;
    else
        return tong(x-1) + (float)1/x;
}

int main () {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong: " << tong(n) << endl;
    return 0;
}