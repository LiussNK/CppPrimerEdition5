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

void print(const int *ip, size_t size) {
	for (size_t i = 0; i != size; ++i)
		cout << *(ip + i) << endl;
}

int main() {
	int i = 0, j[2] = { 0, 1 };
	print(&i, 1);
	print(j, 2);

	return 0;
}


