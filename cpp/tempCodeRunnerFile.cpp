#include <iostream>
#include <string.h>
#define max 100;
using namespace std;

int main() {
    string s;
    cout << "Nhap vao xau s: ";
    getline(cin, s);
    map<char, int> frequency;
    for (char c : s) {
        frequency[c]++;
    }
    cout << "tan suat xuat hien cua moi ki tu tren xau:" << endl;
    for (auto it = frequency.begin(); it != frequency.end(); it++) {
        cout << it->first << " xuat hien " << it->second << " lan" << endl;
    }

    return 0;
}