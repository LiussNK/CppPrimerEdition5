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

//void print(const int*);
//void print(const int[]);
//void print(const int[10]);
//
//void print(const int*) {};
//void print(const int[]) {};
//void print(const int[10]) {};

void print(const char *cp) {
	if (cp)
		while (*cp)
			cout << *cp++;
}

void print(const int *beg, const int *end) {
	while (beg != end)
		cout << *beg++ << endl;
}

void print(const int ia[], size_t size) {
	for (size_t i = 0; i != size; ++i) {
		cout << ia[i] << endl;
	}
}

void print(int(&arr)[10]) {
	for (auto elem : arr)
		cout << elem << endl;
}

void print(int matrix[][10], int rowSize) {}

void print(int(*matrix)[10], int rowSize) {
}

int main() {
	int i = 0, j[2] = { 0, 1 };
	/*print(&i);
	print(j);*/
	print(begin(j), end(j));
	print(j, end(j) - begin(j));

	int k[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	// print(i);
	// print(j);
	print(k);

	return 0;
}


