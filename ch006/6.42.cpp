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

string make_plural(size_t ctr, const string & word, const string &ending = "s") {
	return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[]) {
	cout << make_plural(2, "success") << endl
		<< make_plural(2, "failure") << endl;

	return 0;
}


