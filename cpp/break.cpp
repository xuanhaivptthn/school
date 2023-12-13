#include <iostream>
using namespace std;

int main () {
	int x;
	for (x=1; x<=10; x++) {
		if (x==5)
			continue;
		cout << x << " ";
	}
	cout << "\n x = " << x << endl;
	return 0;
}
