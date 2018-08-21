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

void calc(int&, int&) {
	cout << "calc(int&, int&)" << endl;
}
void calc(const int&, const int&) {
	cout << "calc(const int&, const int&)" << endl;
}
void calc(char*, char*) {
	cout << "calc(char*, char*)" << endl;
}
void calc(const char*, const char*) {
	cout << "calc(const char*, const char*)" << endl;
}
// 32 行的重复定义
/*
void calc(char* const, char* const) {
cout << "calc(char* const, char* const)" << endl;
}
*/
int main(int argc, char *argv[]) {
	int i1 = 1, i2 = 2;
	const int ic1 = 1, ic2 = 2;
	char ch1 = '1', ch2 = '2';
	char * chp1 = &ch1, *chp2 = &ch2;
	const char chc1 = '1', chc2 = '2';
	const char * cchp1 = &chc1, *cchp2 = &chc2;
	//char * const chcp1 = &chc1, *const chcp2 = &chc2;
	const char * cchp11 = &ch1, *cchp12 = &ch1;
	char * const chcp21 = &ch1, *const chcp22 = &ch1;

	calc(i1, i2);
	calc(ic1, ic2);
	calc(ch1, ch2);
	calc(chp1, chp1);
	calc(chc1, chc1);
	calc(cchp1, cchp1);
	//calc(chcp1, chcp2);
	calc(cchp11, cchp12);
	calc(chcp21, chcp22);

	return 0;
}


