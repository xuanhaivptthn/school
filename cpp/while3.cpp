#include <iostream>
using namespace std;

int main () {
    float a;
    cout << "Nhap a: "; cin >> a;
    float s = 0;
    float n = 1;
    while (s <= a) {
        s = s + (1 / n);
        n = n + 1;
    }
    cout << "Gia tri n can tim: " << n << endl;
    cout << "Gia tri cua S: " << s;
    return 0;
}