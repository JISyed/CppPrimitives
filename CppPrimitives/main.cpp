#include <conio.h>
#include <iostream>

#include "SimpleUnitTester\SimpleUnitTester.h"
using namespace SimpleUnitTestBed;

#include "Int.h"
using namespace PrimitivesAsObjects;


int main()
{
	SimpleUnitTester unitTesting;

	const int failures = unitTesting.PerformAllTests();
	std::cout << "Number of Tests: " << unitTesting.GetNumberOfTests() << "\n";
	std::cout << "Number or Failures: " << failures << "\n\n";

	// Wait for user input
	std::cout << "Press Enter...\n";
	_getch();
	return 0;
}

/*
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
//*/