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

void reset(int *ip) {
	*ip = 0;
	ip = 0;
}

int main() {
	int i = 42;
	reset(&i);
	cout << "i = " << i << endl;

	return 0;
}


