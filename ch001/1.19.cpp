#include <iostream>
int main() {
	// 1.11
	int i1 = 0, i2 = 0;
	std::cout << "Please enter 2 numbers : " << std::endl;
	std::cin >> i1 >> i2;
	int v1 = 0, v2 = 0;
	if (i1 > i2) {
		v1 = i2;
		v2 = i1;
	}
	else {
		v1 = i1;
		v2 = i2;
	}
	while (v1 <= v2) {
		std::cout << v1 << " ";
		v1++;
	}
	std::cout << std::endl;
	return 0;
}
