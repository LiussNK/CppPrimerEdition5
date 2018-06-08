#ifndef _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <iostream>
using std::cin; using std::cout; using std::endl; using std::cerr;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cstdlib>
using std::begin; using std::end;

#include <stdexcept>
using std::invalid_argument;

#include <initializer_list>
using std::initializer_list;

#include <sstream>
using std::ostringstream;

void swap(int &v1, int &v2) {
	if (v1 == v2)
		return;
	int tmp = v2;
	v2 = v1;
	v1 = tmp;
}

bool str_subrange(const string &str1, const string &str2) {
	if (str1.size() == str2.size())
		return str1 == str2;
	auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
	for (decltype(size) i = 0; i != size; ++i) {
		if (str1[i] != str2[i])
			return false;
	}
}

string make_plural(size_t ctr, const string &word, const string &ending) {
	return (ctr > 1) ? word + ending : word;
}

const string &shorterString(const string &s1, const string &s2) {
	return s1.size() <= s2.size() ? s1 : s2;
}

const string &manip() {
	string ret;
	if (!ret.empty())
		return ret;
	else
		return "Empty";
}

char &get_val(string &str, string::size_type ix) {
	return str[ix];
}

vector<string> process() {
	string expected = "1234", actual = "123";
	if (expected.empty())
		return {};
	else if (expected == actual)
		return{ "functionX", "okay" };
	else
		return { "functionX", expected, actual };
}

int factorial(int val) {
	if (val > 1)
		return factorial(val - 1)*val;
	return 1;
}

int main(int argc, char *argv[]) {
	cout << shorterString("123", "1234") << endl;
	// cout << manip() << endl;

	string s1 = "123", s2 = "1234";
	auto sz = shorterString(s1, s2).size();
	cout << sz << endl;

	string s("a value");
	cout << s << endl;
	get_val(s, 0) = 'A';
	cout << s << endl;

	// shorterString("hi", "bye") = "X";

	vector<string> msg = process();
	for (const auto &s : msg)
		cout << s << endl;

	bool some_failure = false;
	if (some_failure)
		return EXIT_FAILURE;
	else
		return EXIT_SUCCESS;
}


