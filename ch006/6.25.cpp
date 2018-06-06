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


int main(int argc, char *argv[]) {
	if (argc == 3) {
		string s1 = argv[1];
		s1 += argv[2];
		cout << s1 << endl;
	}

	return 0;
}


