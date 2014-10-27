#ifndef SIMPLE_UNIT_TESTER_H
#include "SimpleUnitTester.h"
#endif

#include <iostream>
#include "UnitTest.h"
using namespace SimpleUnitTestBed;

/////////////////////////////////////////////
// Include all classes you want to test here:
#include "../Int.h"
using namespace PrimitivesAsObjects;
/////////////////////////////////////////////

// Macro for error details
#define ERROR_DETAILS(expected, actual) std::cout << "Expected: " \
<< (expected) << ", but actually got: " << (actual) <<std::endl; 

// NOTE: All unit tests return 0 on success, 1 on failure
void SimpleUnitTester::createAllTests(UnitTestList& allUnitTests)
{
	//////////////////////////////
	// BEGIN Unit Test Definitions
	// 0 = success, 1 = failure

	allUnitTests.push_back(UnitTest(
		"Int", "Specialized Ctor with = sign",
		[]()
		{
			int expected = 64;
			Int i = expected;

			if(i.get() != expected)
			{
				// Error message details
				ERROR_DETAILS(expected, i.get());
				return 1;
			}

			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Copy Ctor",
		[]()
		{
			int expected = 64;
			Int i(expected);
			Int j = i;

			if(j.get() != expected)
			{
				// Error message details
				ERROR_DETAILS(expected, j.get());
				return 1;
			}

			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Assignment Operator",
		[]()
		{
			int expected = 64;
			Int i(expected);
			Int j;
			j = i;

			if(j.get() != expected)
			{
				// Error message details
				ERROR_DETAILS(expected, j.get());
				return 1;
			}

			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Cast to primitive int",
		[]()
		{
			int expected = 64;
			Int i(expected);
			int j = i;

			if(j != expected)
			{
				// Error message details
				ERROR_DETAILS(expected, j);
				return 1;
			}

			return 0;
		}
	));

	// END Unit Test Definitions
	//////////////////////////////
}