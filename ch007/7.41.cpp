
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;

class Sales_data {
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
	friend ostream &print(ostream& os, const Sales_data &item);
	friend istream &read(istream& is, Sales_data& item);
public:
	Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data() : Sales_data("", 0, 0.0) {};
	Sales_data(const std::string &s) :Sales_data(s, 0, 0.0) {}
	Sales_data(std::istream &is) : Sales_data() {
		read(is, *this);
	}
	std::string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data &rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}
private:
	inline
		double avg_price() const {
		return units_sold ? revenue / units_sold : 0;
	}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
#endif

Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
ostream &print(ostream& os, const Sales_data &item);
istream &read(istream& is, Sales_data& item);


int main(int argc, char *argv[]) {
	return 0;
}


