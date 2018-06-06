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

void swap(int &a, int &b) {
	a = a - b;
	b = a + b;
	a = b - a;
}

int main() {
	int a = 1, b = 2;
	swap(a, b);

	cout << a << " " << b << endl;

	return 0;
}


