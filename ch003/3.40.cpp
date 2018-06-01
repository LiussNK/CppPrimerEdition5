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

int main()
{
	char ca1[] = "char array a";
	char ca2[] = "char array b";
	char ca3[100];

	strcpy(ca3, ca1);
	strcat(ca3, ca2);

	cout << ca3 << endl;

	return 0;
}


