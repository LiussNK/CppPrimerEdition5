
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;

#include "Sales_data.h";

istream &read(istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream &print(ostream& os, const Sales_data &item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue << " " << item.avg_price();
	return os;
};

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(std::istream &is) {
	read(is, *this);
}

int main(int argc, char *argv[]) {
	Sales_data item1;
	print(cout, item1);
	Sales_data item2("item2");
	print(cout, item2);
	Sales_data item3("item3", 3, 3.0);
	print(cout, item3);
	Sales_data item4(cin);
	print(cout, item4);

	return 0;
}


