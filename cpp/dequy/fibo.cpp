#include <iostream>
using namespace std;

long fibo(int x) {
    if (x<=2)
        return 1;
    else
        return fibo(x-1) + fibo(x-2);
}

int main () {
    int n;
    cout << "Nhap n: "; cin >> n;
    cout << "So thu " << n << " cua day la: " << fibo(n) << endl;
    return 0;
}