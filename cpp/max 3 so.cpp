#include <iostream>

int main () {
	int a,b,c,max;
	
	std::cout << "Nhap a, b, c "; std::cin >> a >> b >> c;
//	max = a;
//	if (max < b) {
//		max = b;
//	}
//	if (max < c) {
//		max = c;
//	}
//	std::cout << max << " max" << std::endl;
//	return 0;

	if (a>b)
		if (b>c)
			max = a;
		else if (a>c)
			max = a;
		else max = c;
	else if (a>c)
		max = b;
		else if (b>c)
			max = b;
			else max = c;
	std::cout << max << " max";
	return 0;
}
