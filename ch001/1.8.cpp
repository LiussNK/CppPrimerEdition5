#include <iostream>

int main()
{
	// right
	std::cout << "/*";
	// right
	std::cout << "*/";
	//wrong
	// std::cout << /* "*/" */;
	// correct
	std::cout << /* */ "*/" /* */;
	// right
	std::cout << /* "*/" /* "/*" */;

	return 0;
}
