#include <iostream>
using namespace std;

int main () {
	char ch;
	int count = 0, countk = 0;
	while (ch != '*') {
		cin >> ch;
		count = count + 1;
		if (ch == 'k' || ch == 'K') countk = countk +1;
	}
	system("cls");
	cout << "So ky tu: " << count << endl;
	cout << "So ky tu 'k': " << countk << endl;
}
