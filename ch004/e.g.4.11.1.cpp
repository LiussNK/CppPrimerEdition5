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
	bool	flag = true;	char			cval = 0;
	short	sval = 0;		unsigned short	usval = 0;
	int		ival = 0;		unsigned int	uival = 0;
	long	lval = 0;		unsigned long	ulval = 0;
	float	fval = 0;		double			dval = 0;

	cout << sizeof(3.14159L + 'a') << endl
		<< (3.14159L + 'a') << endl
		<< sizeof(dval + ival) << endl
		<< (dval + ival) << endl
		<< sizeof(dval + fval) << endl
		<< (dval + fval) << endl
		<< sizeof(ival = dval) << endl
		<< (ival = dval) << endl
		<< sizeof(flag = dval) << endl
		<< (flag = dval) << endl
		<< sizeof(cval + fval) << endl
		<< (cval + fval) << endl
		<< sizeof(cval + fval) << endl
		<< (cval + fval) << endl
		<< sizeof(sval + cval) << endl
		<< (sval + cval) << endl
		<< sizeof(cval + lval) << endl
		<< (cval + lval) << endl
		<< sizeof(ival + ulval) << endl
		<< (ival + ulval) << endl
		<< sizeof(usval + ival) << endl
		<< (usval + ival) << endl
		<< sizeof(uival + lval) << endl
		<< (uival + lval) << endl;

}


