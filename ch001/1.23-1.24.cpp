#include <iostream>
#include "Sales_item.h"
int main() {
	Sales_item curr, input;
	if (std::cin >> curr) {
		Sales_item sum = curr;
		while (std::cin >> input) {
			if (input.isbn() == curr.isbn()) {
				sum += input;
			}
			else {
				std::cout << "Sum of " << curr
					<< " is " << sum << std::endl;
				curr = input;
				sum = curr;
			}
		}
	}

	return 0;
}
