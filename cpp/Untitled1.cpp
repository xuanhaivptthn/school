#include <iostream>
#include <string.h>
#define max 100
using namespace std;


int main() {
    char str[max];
    cout << "Nhap xau: ";
    cin.getline(str, max);
    
    cout << "---------------MENU---------------" << endl;
	cout << "a. So ky tu khong tinh khoang trang trong xau" << endl;
	cout << "b. Dao nguoc xau" << endl; 
	cout << "c. Kiem tra xau doi xung" << endl;
	cout << "" << endl; 
	cout << "----------------------------------" << endl; 
    
	int space = 0;
    for (int i=0; i<strlen(str); i++) {
        if (str[i]==' ') space+=1;
    }
    
    cout << strlen(str)-space << endl;
    cout << strrev(str) << endl;
    if (str == strrev(str)) cout << "Xau doi xung" << endl;
    return 0;
}
