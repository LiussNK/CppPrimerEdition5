
#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;
using std::istream; using std::ostream;
#include <vector>
#include <string>

class Account {
public:
	void calculate() {
		amount += amount * interestRate;
	}
	static double rate() {
		return interestRate;
	}
	static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
	static constexpr int period = 30;
	double daily_tbl[period];
};

void Account::rate(double newRate) {
	interestRate = newRate;
}

double Account::interestRate = initRate();


class Bar {
public:
private:
	static Bar mem1;
	Bar *mem2;
	Bar mem3;
};

class Screen {
public:
	Screen & clear(char = bkground);
private:
	static const char bkground;
};

int main(int argc, char *argv[]) {
	double r;
	r = Account::rate();
	Account ac1;
	Account *ac2 = &ac1;
	r = ac1.rate();
	r = ac2->rate();

	return 0;
}
