#include <iostream>

std::string global_str;			// empty
int global_int;					// 0
int main()
{
	int local_int;				// Пе
	std::string local_str;		// empty

								// std::cout << global_str << '\t';
	std::cout << global_int << '\t';
	// std::cout << local_int << '\t';
	// std::cout << local_str << '\t';
}
