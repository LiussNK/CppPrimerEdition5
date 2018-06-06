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


void swap(int * &ia, int * &ib) {
	int *p = ia;
	ia = ib;
	ib = p;
}

int main() {
	int i1 = 0, i2 = 1;
	int *ip1 = &i1, *ip2 = &i2;
	cout << ip1 << " " << ip2 << endl;
	cout << *ip1 << " " << *ip2 << endl;
	swap(ip1, ip2);
	cout << ip1 << " " << ip2 << endl;
	cout << *ip1 << " " << *ip2 << endl;

	return 0;
}


