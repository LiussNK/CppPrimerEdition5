
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include "Sales_item.h";

bool read(std::istream& is, Sales_item s);
std::ostream& print(std::ostream& os, Sales_item si);

int main(int argc, char *argv[]) {
	Sales_item total;
	if (read(cin, total)) {
		Sales_item trans;
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


