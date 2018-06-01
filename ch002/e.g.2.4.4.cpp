#include <iostream>

int j = 0;
constexpr int i = 42;

using namespace std;

int main()
{
	constexpr int mf = 20;
	constexpr int limir = mf + 1;

	// const int *p = nullptr;
	constexpr int *q = nullptr;

	constexpr int *np = nullptr;
	// constexpr const int *p = &i;
	constexpr int *p1 = &j;

	return 0;
}