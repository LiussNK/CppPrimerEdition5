
#include <string>

class Person {
	std::string name;
	std::string address;
	const std::string getName() {
		return name;
	}
	const std::string getAddress() {
		return address;
	}
};

istream &read(istream& is, Person& p) {
	is >> p.name >> p.address;
	return is;
}
ostream &print(ostream& os, const Person &p) {
	os << p.getName() << " " << p.getAddress();
	return os;
};