#include <iostream>
int main() {
	std::cout << "a really, really long string literal "
		"that spans two line" << std::endl;

	std::cout << '\n';					// ת����һ��
	std::cout << "\tHi!\n";				// ���һ���Ʊ��, ��� "Hi!", ת����һ��

	std::cout << "Hi \x4dO\115!\n";		// ��� Hi MOM!, ת����һ��
	std::cout << '\115' << '\n';			// ��� M, ת����һ��

	return 0;
}
