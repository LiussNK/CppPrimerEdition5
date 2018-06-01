#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstddef>
#include <cstring>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	// 4.13
	int i; double d;
	d = i = 3.5;
	cout << i << " " << d << endl;
	i = d = 3.5;
	cout << i << " " << d << endl;

	// 4.14
	// if (42 = i)
	// wrong lvalue = rvalue;
	if (i = 42)
		cout << "i = 42" << endl;

	// 4.15
	double dval; int ival; int *pi;
	pi = &ival;
	dval = *pi = 0;

	// 4.16
	// if ((p = getPtr()) != 0)
	// if (i == 1024)

	return 0;
}


