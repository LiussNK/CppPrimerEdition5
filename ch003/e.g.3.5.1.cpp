#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;

int main()
{
	unsigned cnt = 42;
	constexpr unsigned sz = 42;
	int arr[10];
	int *parr[sz];
	string bad[cnt];
	string strs[get_size()];

	char a1[] = { 'C', '+', '+' };
	char a2[] = { 'C', '+', '+', '\0' };
	char a3[] = "C++";
	const char a4[6] = "Daniel";

	int a[] = { 0, 1, 2 };
	int a2[] = a;
	a2 = a;

	int *ptrs[10];
	int &refs[10] = {};
	int(*Parray)[10] = &arr;
	int(&arrRef)[10] = arr;

	int *(&arry)[10] = ptrs;

	return 0;
}

