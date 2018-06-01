#include <iostream>
int main() {
	std::cout << "a really, really long string literal "
		"that spans two line" << std::endl;

	std::cout << '\n';					// 转到新一行
	std::cout << "\tHi!\n";				// 输出一个制表符, 输出 "Hi!", 转到新一行

	std::cout << "Hi \x4dO\115!\n";		// 输出 Hi MOM!, 转到新一行
	std::cout << '\115' << '\n';			// 输出 M, 转到新一行

	return 0;
}
