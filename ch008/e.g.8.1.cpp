
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

int main(int argc, char *argv[]) {
	cout << "hi" << endl;
	cout << "hi" << std::flush;
	cout << "hi" << std::ends;

	cout << std::unitbuf;
	// ...
	cout << std::nounitbuf;

	int ival;
	cin >> ival;

	cin.tie(&cout);
	ostream *old_tie = cin.tie(nullptr);
	cin.tie(&cerr);
	cin.tie(old_tie);

	return 0;
}
