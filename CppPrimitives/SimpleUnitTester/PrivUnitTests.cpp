#ifndef SIMPLE_UNIT_TESTER_H
#include "SimpleUnitTester.h"
#endif

#include <iostream>
#include "UnitTest.h"
using namespace SimpleUnitTestBed;

// Macro for error details
#define ERROR_DETAILS(expected, actual) std::cout << "Expected: " \
<< (expected) << ", but actually got: " << (actual) <<std::endl; 

#define EQUAL_CHECK(expected, actual) if(actual != expected) \
			{ \
				ERROR_DETAILS(expected, actual); \
				return 1; \
			}

/////////////////////////////////////////////
// Include all classes you want to test here:
#include "../Int.h"
using namespace PrimitivesAsObjects;
/////////////////////////////////////////////

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
			// -------------------------
			int expected = 64;
			Int i = expected;


			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Copy Ctor",
		[]()
		{
			// -------------------------
			int expected = 64;
			Int i(expected);
			Int j = i;

			// -------------------------
			EQUAL_CHECK(expected, j.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Assignment Operator",
		[]()
		{
			// -------------------------
			int expected = 64;
			Int i(expected);
			Int j;
			j = i;

			// -------------------------
			EQUAL_CHECK(expected, j.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Cast to primitive int",
		[]()
		{
			// -------------------------
			int expected = 64;
			Int i(expected);
			int j = i;

			// -------------------------
			EQUAL_CHECK(expected, j);
			return 0;
		}
	));

	// END Unit Test Definitions
	//////////////////////////////
}