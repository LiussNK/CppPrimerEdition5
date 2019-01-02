
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

istream& read(istream& is) {
	std::string str;
	if(is >> str) {
		cout << str << endl;
	}
	return is;
}

int main(int argc, char *argv[]) {
	read(cin);

	return 0;
}
