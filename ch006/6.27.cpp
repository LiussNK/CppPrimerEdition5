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

int sum_of(initializer_list<int> il) {
	int sum = 0;
	for (const int *beg = il.begin(); beg != il.end(); ++beg)
		sum += *beg;
	return sum;
};

int main(int argc, char *argv[]) {
	cout << sum_of({ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }) << endl;

	return 0;
}


