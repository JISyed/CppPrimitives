#include <conio.h>
#include <iostream>

#include "Int.h"
using namespace PrimitivesAsObjects;

int main()
{
	int i = 1;
	unsigned int ui = 100;
	char c = 32;
	unsigned char uc = 40;
	short s = 400;
	unsigned short us = 800;
	long l = 1000L;
	unsigned long ul = 2000L;
	long long ll = 1000000LL;
	unsigned long long ull = 2000000LL;

	float f = 8.9f;
	double d = 9.0;

	bool b = true;

	Int intObj = 64;
	intObj = 9000;
	Int intObj2 = intObj;
	intObj2 = 64;
	Int intObj3;
	intObj3 = intObj2;

	int iConvert = intObj2;

	// Wait for user input
	std::cout << "Press Enter...\n";
	_getch();
	return 0;
}