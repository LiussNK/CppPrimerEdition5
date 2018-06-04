#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::invalid_argument;

int main() {
	int i1, i2;
	while (cin >> i1 >> i2) {
		try {
			if (i2 == 0)
				throw(invalid_argument("Integer division by zero"));
			cout << i1 / i2 << endl;
		}
		catch (invalid_argument err) {
			cout << err.what() << endl;
			cout << "Enter y to try again, or end" << endl;
			char ch;
			cin >> ch;
			if (!ch || ch != 'y')
				break;
		}
	}

	return 0;
}


