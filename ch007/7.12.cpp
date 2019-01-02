#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>

struct Sales_data {
	Sales_data() = default;
	Sales_data(const std::string &s) :bookNo(s) {}
	Sales_data(const std::string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}
	Sales_data(std::istream &is) {
		read(is);
	}
	istream &read(istream& is) {
		double price = 0;
		is >> bookNo >> units_sold >> price;
		revenue = price * units_sold;
		return is;
	}
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	std::string isbn() const {
		return bookNo;
	}
	Sales_data& combine(const Sales_data &rhs) {
		units_sold += rhs.units_sold;
		revenue += rhs.revenue;
		return *this;
	}
	double avg_price() const {
		return revenue / units_sold;
	}
};
#endif

