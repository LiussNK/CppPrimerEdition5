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

bool lengthCompare(const string &, const string &);

bool(*pf)(const string &, const string &) = lengthCompare;
bool(*pf)(const string &, const string &) = &lengthCompare;
// pf = lengthCompare;
// pf = &lengthCompare;

bool b1 = pf("hello", "goodbye");
bool b2 = (*pf)("hello", "goodbye");
bool b3 = lengthCompare("hello", "goodbye");
string::size_type sumLength(const string&, const string&);
bool cstringCompare(const char*, const char*);

// pf = 0;
// pf = sumLength;
bool(*pf)(const string &, const string &) = 0;
// bool(*pf)(const string &, const string &) = sumLength;
// bool(*pf)(const string &, const string &) = cstringCompare;
bool(*pf)(const string &, const string &) = lengthCompare;

void ff(int*);
void ff(unsigned int);
void(*pf1)(unsigned int) = ff;
// void(*pf2)(int) = ff;
// double(*pf3)(int*) = ff;

void useBiggr(const string &s1, const string &s2, bool pf(const string &, const string &));
void useBigger(const string &s1, const string &s2, bool(*pf)(const string &, const string &));

typedef bool Func(const string &, const string&);
typedef decltype(lengthCompare) Func2;
typedef bool(*FuncP)(const string &, const string &);
typedef decltype(lengthCompare) *FuncP2;

void useBigger(const string&, const string &, Func);
void useBigger(const string&, const string&, FuncP2);

using F = int(int*, int);
using PF = int(*)(int*, int);

PF f1(int);
// F f1(int);
F *f1(int);
int(*f1(int))(int*, int);
auto f1(int) -> int(*)(int*, int);

string::size_type largerLength(const string&, const string&);
decltype(sumLength) *getFcn(const string&);

int main(int argc, char *argv[]) {

	useBigger("123", "456", lengthCompare);
	return 0;
}


