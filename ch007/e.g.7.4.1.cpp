
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

typedef double Money;
std::string bal;
class Account {
public:
	Money balance() {
		return bal;
	}
private:
	Money bal;
};

int height;
class Screen {
public:
	typedef std::string::size_type pos;
	void dummy_fcn(pos height) {
		cursor = width * height;
	}
	void setHeight(pos);
private:
	pos cursor = 0;
	pos height = 0, width = 0;
};

void Screen::dummy_fcn(pos height) {
	cursor = width * this->height;
	cursor = width * Screen::height;
}

void Screen::dummy_fcn(pos ht) {
	cursor = width * height;
}

void Screen::dummy_fcn(pos height) {
	cursor = width * ::height;
}

Screen::pos verify(Screen::pos);
void Screen::setHeight(pos var) {
	height = verify(var);
}

int main(int argc, char *argv[]) {
	return 0;
}


