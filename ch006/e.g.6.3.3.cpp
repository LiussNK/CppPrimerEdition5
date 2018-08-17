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

typedef int arrT[10];
using arrT = int[10];

arrT* func(int i);

int(*func(int i))[10];

auto func(int i) -> int(*)[10];

int factorial(int val) {
	if (val != 0)
		return factorial(val - 1)*val;
	return 1;
}

int(*func(int i))[10];
auto func(int i) -> int(*)[10];

int odd[] = { 1, 3, 5, 7, 9 };
int even[] = { 0, 2, 4, 6, 8 };
decltype(odd) *arrPtr(int i) {
	return (i % 2) ? &odd : &even;
}

int main(int argc, char *argv[]) {
	int arr[10];
	int *p1[10];
	int(*p2)[10] = &arr;

	int b = 0;
	// const * int a = &b;

	return 0;
}


