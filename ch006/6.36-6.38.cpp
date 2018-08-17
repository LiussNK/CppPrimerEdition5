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

// 6.36
string(*func())[10];

// 6.37
typedef string arrT[10];
arrT * func();

using sa10 = string[10];
sa10* func();

auto func()->string(*)[10];

string sa[10];
decltype(sa) *func();

// 6.38
int odd[5] = { 1, 3, 5, 7, 9 };
int even[5] = { 0, 2, 4, 6, 8 };
decltype(odd) &arrPtr(int i) {
	return (i % 2) ? odd : even;
}

int main(int argc, char *argv[]) {
	return 0;
}


