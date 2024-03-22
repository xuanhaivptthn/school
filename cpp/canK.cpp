#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k;
    cout << "Nhap n: "; cin >> n;
    cout << "Nhap k: "; cin >> k;
    float kq=0;
    for (int i = 0; i<=n; i++) {
        kq = sqrt(k + kq);
    }
    cout << kq;
    return 0;
}