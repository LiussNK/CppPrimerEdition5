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


int bigger(int ia, const int *ib) {
	return ia > *ib ? ia : *ib;
}

int main() {
	int i = 0;
	cout << bigger(1, &i) << endl;

	return 0;
}


