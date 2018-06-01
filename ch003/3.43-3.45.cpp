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
	// 3.43
	int ia[3][4] = {
		{ 0, 1, 2, 3 },
	{ 4, 5, 6, 7 },
	{ 8, 9, 10, 11 }
	};

	for (int(&row)[4] : ia) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	for (size_t row = 0; row < 3; ++row) {
		for (size_t col = 0; col < 4; ++col)
			cout << ia[row][col] << ' ';
		cout << endl;
	}

	for (int(*p)[4] = begin(ia); p != end(ia); ++p) {
		for (int *q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
		cout << endl;
	}

	// 3.44
	using int_array = int[4];
	typedef int int_array[4];

	for (int_array(&row) : ia) {
		for (int col : row)
			cout << col << " ";
		cout << endl;
	}

	for (size_t row = 0; row < 3; ++row) {
		for (size_t col = 0; col < 4; ++col)
			cout << ia[row][col] << ' ';
		cout << endl;
	}

	for (int_array(*p) = begin(ia); p != end(ia); ++p) {
		for (int *q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
		cout << endl;
	}

	// 3.45
	for (auto &row : ia) {
		for (auto col : row)
			cout << col << " ";
		cout << endl;
	}

	for (auto row = 0; row < 3; ++row) {
		for (auto col = 0; col < 4; ++col)
			cout << ia[row][col] << ' ';
		cout << endl;
	}

	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
		cout << endl;
	}

	return 0;
}


