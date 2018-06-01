#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstddef>
#include <cstring>
#include "Sales_data.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	int i = 2, j = 1;
	double slope = static_cast<double>(j) / i;
	cout << slope << endl;

	double d = 3.14;
	void* p = &d;
	double *dp = static_cast<double*>(p);
	cout << *dp << endl;
	*dp = 31.4;

	char ch = 'a';
	const char *pc = &ch;
	char *p = const_cast<char*>(pc);
	// wrong
	// *pc = 'b';
	*p = 'b';

}


