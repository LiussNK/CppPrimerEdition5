#include <iostream>

using namespace std;

int main()
{
	int ival = 42;
	int *p = 0;
	p = &ival;
	*p = 24;
	cout << p << " " << *p << endl;

	return 0;
}
