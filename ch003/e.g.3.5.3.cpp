#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <cstddef>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main()
{
	/*string nums[] = { "one", "two", "three" };
	string *p = &nums[0];
	string *p2 = nums;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	auto ia2(ia);
	ia2 = 42;

	auto ia2(&ia[0]);

	decltype(ia) ia3 = { 0,1,2,3,4,5,6,7,8,9 };
	ia3 = p;
	ia3[4] = ia;*/

	/*int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *p = arr;
	++p;

	int *e = &arr[10];

	for (int *b = arr;b != e;++b)
	cout << *b << endl;

	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *beg = begin(ia);
	int *last = end(ia);

	int *pbeg = begin(arr), *pend = end(arr);
	while (pbeg != pend && *pbeg >= 0)
	++pbeg;

	constexpr size_t sz = 5;
	int arr[sz] = { 1,2,3,4,5 };
	int *ip = arr;
	int *ip2 = ip + 4;

	int *p = arr + sz;
	int *p2 = arr + 10;

	auto n = end(arr) - begin(arr);

	int *b = arr, *e = arr + sz;
	while (b < e)
	{
	++b;
	}*/

	int i = 0, sz = 42;
	int *p = &i, *e = &sz;
	cout << p << " " << e << endl;
	if (p < e)
		cout << "p < e";
	else
	{
		if (p > e)
			cout << "p > e";
		else
		{
			if (p == e)
				cout << "p == e";
			else
			{
				cout << "???";
			}
		}
	}

	int ia[] = { 0,2,4,6,8 };
	int last = *(ia + 4);

	int i = ia[2];
	int *p = ia;
	i = *(p + 2);

	int *p = &ia[2];
	int j = p[1];
	int k = p[-2];

	return 0;
}

