#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
	// 4.28
	cout << " bool: " << sizeof(bool) << endl
		<< " char: " << sizeof(char) << endl
		<< " short: " << sizeof(short) << endl
		<< " int: " << sizeof(int) << endl
		<< " long: " << sizeof(long) << endl
		<< " long long: " << sizeof(long long) << endl
		<< " float: " << sizeof(float) << endl
		<< " double: " << sizeof(double) << endl
		<< " long double: " << sizeof(long double) << endl
		<< " bool *: " << sizeof(bool *) << endl
		<< " char *: " << sizeof(char *) << endl
		<< " short *: " << sizeof(short *) << endl
		<< " int *: " << sizeof(int *) << endl
		<< " long *: " << sizeof(long *) << endl
		<< " long long *: " << sizeof(long long *) << endl
		<< " float *: " << sizeof(float *) << endl
		<< " double *: " << sizeof(double *) << endl
		<< " long double *: " << sizeof(long double *) << endl
		<< " void *: " << sizeof(void *) << endl;

	// 4.29
	int x[10]; int*p = x;
	cout << sizeof(x) / sizeof(*x) << endl;	// 10
	cout << sizeof(p) / sizeof(*p) << endl; // 1

											// 4.30
											// sizeof (x + y)
											// sizeof ((p->mem)[i])
											// sizeof (a < b)
											// sizeof (f())

	return 0;
}


