#include <iostream>
#include "Sales_item.h"
int main() {
	// 1.21
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << item1 + item2 << std::endl;

	// 1.22
	Sales_item curr, input;
	if (std::cin >> curr) {
		Sales_item sum = curr;
		while (std::cin >> input) {
			sum += input;
		}
		std::cout << "Sum of " << curr
			<< " is " << sum << std::endl;
	}

	return 0;
}
