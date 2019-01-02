
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

class Example {
public:
	static double rate = 6.5;
	static const int vecSize = 20;
	static std::vector<double> vec(vecSize);
};

double Example::rate;
std::vector<double> Example::vec;

int main(int argc, char *argv[]) {

	return 0;
}
