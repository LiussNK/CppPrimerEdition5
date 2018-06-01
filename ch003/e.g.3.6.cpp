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
	int ia[3][4];
	int arr[10][20][30];

	int ia[3][4] = {
		{ 0, 1, 2, 3 },
	{ 4, 5, 6, 7 },
	{ 8, 9, 10, 11 }
	};

	int ia[3][4] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

	int ia[3][4] = { { 0 }, { 4 }, { 8 } };

	int ix[3][4] = { 0, 3, 6, 9 };

	ia[2][3] = arr[0][0][0];
	int(&row)[4] = ia[1];

	constexpr size_t rowCnt = 3, colCnt = 4;
	int ia[rowCnt][colCnt];
	for (size_t i = 0; i != rowCnt; ++i) {
		for (size_t j = 0; j != colCnt; ++j) {
			ia[i][j] = i * colCnt + j;
		}
	}

	size_t cnt = 0;
	for (auto &row : ia)
		for (auto &col : row) {
			col = cnt;
			++cnt;
		}

	for (const auto &row : ia)
		for (auto col : row)
			cout << col << endl;

	for (auto row : ia)
		for (auto col : row)
			cout << col << endl;

	int ia[3][4];
	int(*p)[4] = ia;
	p = &ia[2];

	for (auto p = ia; p != ia + 3; ++p) {
		for (auto q = *p; q != *p + 4; ++q)
			cout << q << ' ';
		cout << endl;
	}

	for (auto p = begin(ia); p != end(ia); ++p) {
		for (auto q = begin(*p); q != end(*p); ++q)
			cout << *q << ' ';
		cout << endl;
	}

	using int_array = int[4];
	typedef int int_array[4];

	for (int_array *p = ia; p != ia + 3; ++p) {
		for (int *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
		cout << endl;
	}

	return 0;
}


