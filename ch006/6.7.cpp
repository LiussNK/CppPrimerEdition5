#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;
using std::invalid_argument;

size_t count_calls() {
	static size_t ctr = 0;
	return ctr++;
}

int main() {
	for (size_t i = 0; i != 10; ++i)
		cout << count_calls() << endl;

	return 0;
}


