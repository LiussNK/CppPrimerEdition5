
#include <string>

class Person {
	std::string name = "";
	std::string address;
	const std::string getName() {
		return name;
	}
	const std::string getAddress() {
		return address;
	}
	Person() = default;
	Person(const std::string &strn, std::string stra) :name(strn), address(stra) {}
	Person(std::istream &is) {
		is >> name >> address;
	}
};