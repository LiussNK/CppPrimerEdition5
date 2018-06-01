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
	char ca[] = { 'C', '+', '+' };
	cout << strlen(ca) << endl;

	string s1 = "A string example";
	string s2 = "A different string";
	if (s1 < s2)
		cout << "s1 < s2" << endl;
	else
	{
		cout << "s1 >= s2" << endl;
	}

	const char ca1[] = "A string example";
	const char ca2[] = "A z different string";
	if (ca1 < ca2)
		cout << "ca1 < ca2" << endl;
	else
	{
		cout << "ca1 >= ca2" << endl;
	}
	if (strcmp(ca1, ca2) < 0)
		cout << "ca1 < ca2" << endl;
	else
	{
		cout << "ca1 >= ca2" << endl;
	}

	//string largeStr = s1 + " " + s2;

	char largeStr[50];
	strcpy(largeStr, ca1);
	strcat(largeStr, " ");
	strcat(largeStr, ca2);

	return 0;
}

