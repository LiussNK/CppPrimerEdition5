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
	int ia[10];
	for (size_t ix = 0; ix < 10; ++ix)
		ia[ix] = ix;

	int ia1[10];
	for (size_t ix = 0; ix < 10; ++ix)
		ia1[ix] = ia[ix];

	vector<int> iv(10);
	for (int & i : iv)
		i = i;
	
	vector<int> iv2(iv);

	return 0;
}

