#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::string;
using std::begin; using std::end;

int main() {
	unsigned ffCnt = 0, flCnt = 0, fiCnt = 0;
	bool lastIsF = false;
	char ch;
	while (cin >> ch) {
		if (lastIsF)
			switch (ch) {
			case 'f':
				++ffCnt;
				break;
			case 'l':
				++flCnt;
				break;
			case 'i':
				++fiCnt;
				break;
			default:
				;
			}
		if (ch == 'f')
			lastIsF = true;
	}
	cout << "Number of ff: \t" << ffCnt << '\n'
		<< "Number of fl: \t" << flCnt << '\n'
		<< "Number of fi: \t" << fiCnt << '\n';
}


