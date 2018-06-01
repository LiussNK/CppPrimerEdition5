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
	// 4.36
	int i = 2;
	double d = 3.14;
	i *= static_cast<int>(d);

	// 4.37
	int i; double d; const string *ps; char *pc; void *pv;
	pv = const_cast<string *>(ps);
	i = static_cast<int>(*pc);
	pv = &d;
	pc = static_cast<char *>(pv);

	// 4.38
	// j/i 的结果转成 double 赋值给 slope
}


