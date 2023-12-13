#include <iostream>

int main () {
	int n;
	std::cout << "Nhap n ";
	std::cin >> n;
	if (n % 2 == 0) {
		std::cout << n << " chan" << std::endl;
	}
	else {
		std::cout << n << " le" << std::endl;
	}
	return 0;
}
