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

typedef string::size_type sz;
string screen(sz ht = 24, sz wid = 80, char backgrnd = ' ');

// string screen(sz, sz, char = ' ');
// string screen(sz, sz, char = '*');
// string screen(sz = 24, sz = 80, char);

sz wd = 80;
char def = ' ';
sz ht();
string screen(sz = ht(), sz = wd, char = def);
string window = screen();

void f2() {
	def = '*';			// 改变默认实参的值
	sz wd = 100;		// 隐藏了外层定义的 wd, 但是没有改变默认值
	window = screen();	// 调用 screen(ht(), 80, '*')
}
int main(int argc, char *argv[]) {
	string window;
	window = screen();
	window = screen(66);
	window = screen(66, 256);
	window = screen(66, 256, '#');
	// window = screen(, , '?');
	window = screen('?');
	return 0;
}


