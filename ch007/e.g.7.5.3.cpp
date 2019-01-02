
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>
class NoDefault {
public:
	NoDefault(const std::string&);
};
struct A {
	NoDefault myMem;
};
struct B {
	B() {}
	NoDefault b_member;
};
int main(int argc, char *argv[]) {
	A a;

	return 0;
}


