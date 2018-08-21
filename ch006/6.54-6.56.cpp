#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cstdlib>
using std::begin; using std::end;

#include <stdexcept>
using std::invalid_argument;

#include <initializer_list>
using std::initializer_list;

#include <sstream>
using std::ostringstream;

int f(int, int);
vector<decltype(f) *> vf(4);

int sum(int i1, int i2) {
	return i1 + i2;
}
int difference(int i1, int i2) {
	return i1 - i2;
}
int product(int i1, int i2) {
	return i1 * i2;
}
int quotient(int i1, int i2) {
	return i1 / i2;
}
int main(int argc, char *argv[]) {
	vf[0] = sum;
	vf[1] = difference;
	vf[2] = product;
	vf[3] = quotient;

	for (auto f : vf) {
		cout << f(6, 2) << endl;
	}
	return 0;
}


