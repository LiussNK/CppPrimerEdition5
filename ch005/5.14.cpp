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
	vector<string> v;
	string s;
	while (getline(cin, s) && !s.empty())
		v.push_back(s);
	auto beg = v.begin();
	unsigned cnt = 1;
	string wordLast;
	string wordThis;
	while (beg != v.end()) {
		auto sbeg = (*beg).begin();
		while ((*beg).end() - sbeg >= 0) {
			if (sbeg == (*beg).end() || isspace(*sbeg)) {
				if (!wordThis.empty())
					if (wordThis == wordLast) {
						wordThis = "";
						++cnt;
					}
					else {
						if (!wordLast.empty()) {
							cout << "cnt of " << wordLast << " is " << cnt << endl;
						}
						wordLast = wordThis;
						wordThis = "";
						cnt = 1;
					}
			}
			else {
				wordThis += *sbeg;
			}
			if (sbeg == (*beg).end())
				break;
			++sbeg;
		}
		++beg;
	}
	cout << "cnt of " << wordLast << " is " << cnt << endl;

	return 0;
}


