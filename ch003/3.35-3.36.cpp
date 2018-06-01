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
	// 3.35
	int ia[] = { 0,1,2,3,4,5,6,7,8,9 };
	int *pend = end(ia);
	for (int *pbeg = begin(ia); pbeg != pend; ++pbeg)
		*pbeg = 0;
	for (int *pbeg = begin(ia); pbeg != pend; ++pbeg)
		cout << *pbeg << " ";
	cout << endl;

	// 3.36
	int ia1[] = { 0,1,2 };
	int ia2[] = { 0,1,2 };
	int ia3[] = { 0,1,2,3 };

	int *pbeg1 = begin(ia1);
	int *pend1 = end(ia1);
	int *pbeg2 = begin(ia2);
	int *pend2 = end(ia2);
	int *pbeg3 = begin(ia3);
	int *pend3 = end(ia3);

	while (pbeg1 != pend1 && pbeg2 != pend2 && *pbeg1 == *pbeg2)
	{
		++pbeg1;
		++pbeg2;
	}
	if (pbeg1 == pend1 && pbeg2 == pend2)
		cout << "ia1 == ia2" << endl;
	else
	{
		cout << "ia1 != ia2" << endl;
	}

	while (pbeg1 != pend1 && pbeg3 != pend3 && *pbeg1 == *pbeg3)
	{
		++pbeg1;
		++pbeg3;
	}
	if (pbeg1 == pend1 && pbeg3 == pend3)
		cout << "ia1 == ia3" << endl;
	else
	{
		cout << "ia1 != ia3" << endl;
	}

	vector<int> ivec1(10, 0);
	vector<int> ivec2(10, 0);
	vector<int> ivec3(10, 1);

	if (ivec1 == ivec2)
		cout << "ivec1 == ivec2" << endl;
	else
	{
		cout << "ivec1 != ivec2" << endl;
	}
	if (ivec1 == ivec3)
		cout << "ivec1 == ivec3" << endl;
	else
	{
		cout << "ivec1 != ivec3" << endl;
	}

	return 0;
}

