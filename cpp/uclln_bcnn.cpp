#include <iostream>
using namespace std;

int main () {
    int a, b;
    cout << "Nhap a, b: "; cin >> a >> b;
    int luua = a;
    int luub = b;
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    cout << "UCLN: " << a << endl;
    cout << "BCNN: " << luua * luub /a << endl;
    return 0;
}