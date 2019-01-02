
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

struct Sales_data {
	std::string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data&);
	double avg_price() const;
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}


int main(int argc, char *argv[]) {
	return 0;
}


