
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "Sales_data.h";

bool read(std::istream& is, Sales_data& s) {
	if (is >> s.bookNo && is >> s.units_sold && is >> s.revenue) {
		return true;
	}
	else {
		return false;
	}
};
std::ostream& print(std::ostream& os, Sales_data &si) {
	os << "book: " << si.bookNo << si.units_sold << si.revenue;
	return os;
};

int main(int argc, char *argv[]) {
	Sales_data total;
	if (read(cin, total)) {
		Sales_data trans;
		while (read(cin, trans)) {
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else {
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else {
		cerr << "No data?!" << endl;
	}

	return 0;
}


