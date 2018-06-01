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
	unsigned char bits = 0233;
	unsigned char b1 = 0145;
	unsigned char b2 = 0257;

	unsigned long quiz1 = 0;
	quiz1 |= 1UL << 27;
	quiz1 &= ~(1UL << 27);

	bool status = quiz1 & (1UL << 27);

	return 0;
}


