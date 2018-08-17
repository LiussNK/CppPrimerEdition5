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

void print(vector<int>& vi, int index) {
	if (index > 0)
		print(vi, index - 1);
	cout << vi[index] << " ";
}

int main(int argc, char *argv[]) {
	vector<int> vi = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	print(vi, vi.size() - 1);
	return 0;
}


