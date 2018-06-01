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
	string s1 = "string a";
	string s2 = "string b";
	if (s1 < s2)
		cout << s1 << endl
		<< " < " << endl
		<< s2 << endl;
	else
	{
		cout << s1 << endl
			<< " >= " << endl
			<< s2 << endl;
	}

	char ca1[] = "char array a";
	char ca2[] = "char array b";
	if (strcmp(ca1, ca2) < 0)
		cout << ca1 << endl
		<< " < " << endl
		<< ca2 << endl;
	else
	{
		cout << ca1 << endl
			<< " >= " << endl
			<< ca2 << endl;
	}

	return 0;
}


