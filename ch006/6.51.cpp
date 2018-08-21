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

void f() {
	cout << "f()" << endl;
}
void f(int) {
	cout << "f(int)" << endl;
}
void f(int, int) {
	cout << "f(int, int)" << endl;
}
void f(double, double = 3.14) {
	cout << "f(double, double)" << endl;
}

int main(int argc, char *argv[]) {
	// f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.56, 3.14);
	return 0;
}


