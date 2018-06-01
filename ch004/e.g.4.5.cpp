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

int main() {
	int i = 0, j;
	j = ++i;
	cout << i << " " << j << endl;
	j = i++;
	cout << i << " " << j << endl;

	vector<int> v;
	auto pbeg = v.begin();
	while (pbeg != v.end() && *pbeg >= 0)
		cout << *pbeg++ << endl;


	string s("some string");
	for (auto it = s.begin(); it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);
	cout << s << endl;		// Êä³ö SOME string

							// wrong
							/*auto beg = s.begin();
							while (beg != s.end() && isspace(*beg))
							*beg = toupper(*beg++);*/
							// *beg = toupper(*beg);
							// *(beg + 1) = toupper(*beg);

	return 0;
}


