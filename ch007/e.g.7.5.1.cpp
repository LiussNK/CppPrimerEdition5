
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

class ConstRef {
public:
	ConstRef(int ii);
private:
	int i;
	const int ci;
	int &ri;
};
ConstRef::ConstRef(int ii) :i(ii), ci(ii), ri(i) {
	//i = ii;
	//ci = ii;
	//ri = i;
}

class X {
	int i;
	int j;
public:
	X(int val) :j(val), i(j) {}
};

class Sales_data;
void read(std::istream &, Sales_data);
class Sales_data {
public:
	Sales_data(std::string s = "") :bookNo(s) {}
	Sales_data(std::string s, unsigned cnt, double rev) :bookNo(s), units_sold(cnt), revenue(rev * cnt) {}
	Sales_data(std::istream &isalnum) {
		read(isalnum, *this);
	}
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
};

int main(int argc, char *argv[]) {
	return 0;
}


