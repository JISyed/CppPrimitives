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

	allUnitTests.push_back(UnitTest(
		"Int", "Int += Int",
		[]()
		{
			// -------------------------
			int expected = 12;
			Int i(3);
			Int j(9);
			i += j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int += int",
		[]()
		{
			// -------------------------
			int expected = 12;
			Int i(3);
			int j(9);
			i += j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int -= Int",
		[]()
		{
			// -------------------------
			int expected = 6;
			Int i(9);
			Int j(3);
			i -= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int -= int",
		[]()
		{
			// -------------------------
			int expected = 6;
			Int i(9);
			int j(3);
			i -= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int *= Int",
		[]()
		{
			// -------------------------
			int expected = 27;
			Int i(9);
			Int j(3);
			i *= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int *= int",
		[]()
		{
			// -------------------------
			int expected = 27;
			Int i(9);
			int j(3);
			i *= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int /= Int",
		[]()
		{
			// -------------------------
			int expected = 4;
			Int i(12);
			Int j(3);
			i /= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int /= int",
		[]()
		{
			// -------------------------
			int expected = 4;
			Int i(12);
			int j(3);
			i /= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int %= Int",
		[]()
		{
			// -------------------------
			int expected = 1;
			Int i(7);
			Int j(6);
			i %= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int %= int",
		[]()
		{
			// -------------------------
			int expected = 1;
			Int i(7);
			int j(6);
			i %= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int &= Int",
		[]()
		{
			// -------------------------
			int expected = 0x1000;
			Int i(0x1100);
			Int j(0x1010);
			i &= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int &= int",
		[]()
		{
			// -------------------------
			int expected = 0x1000;
			Int i(0x1100);
			int j(0x1010);
			i &= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int |= Int",
		[]()
		{
			// -------------------------
			int expected = 0x1110;
			Int i(0x1100);
			Int j(0x1010);
			i |= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int |= int",
		[]()
		{
			// -------------------------
			int expected = 0x1110;
			Int i(0x1100);
			int j(0x1010);
			i |= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int ^= Int",
		[]()
		{
			// -------------------------
			int expected = 0x0110;
			Int i(0x1100);
			Int j(0x1010);
			i ^= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int ^= int",
		[]()
		{
			// -------------------------
			int expected = 0x0110;
			Int i(0x1100);
			int j(0x1010);
			i ^= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int <<= Int",
		[]()
		{
			// -------------------------
			int expected = 0x0078;
			Int i(0x000F);
			Int j(3);
			i <<= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int <<= int",
		[]()
		{
			// -------------------------
			int expected = 0x0078;
			Int i(0x000F);
			int j(3);
			i <<= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int >>= Int",
		[]()
		{
			// -------------------------
			int expected = 0x000F;
			Int i(0x00F0);
			Int j(4);
			i >>= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int >>= int",
		[]()
		{
			// -------------------------
			int expected = 0x000F;
			Int i(0x00F0);
			int j(4);
			i >>= j;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "int += Int",
		[]()
		{
			// -------------------------
			int expected = 9;
			Int i(5);
			int j(4);
			j += i;

			// -------------------------
			EQUAL_CHECK(expected, j);
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "++Int",
		[]()
		{
			// -------------------------
			int expected = 9;
			Int i = 8;
			++i;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "--Int",
		[]()
		{
			// -------------------------
			int expected = 7;
			Int i = 8;
			--i;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int++",
		[]()
		{
			// -------------------------
			int expected = 9;
			Int i = 8;
			Int j = i++;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			EQUAL_CHECK(8, j.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int--",
		[]()
		{
			// -------------------------
			int expected = 7;
			Int i = 8;
			Int j = i--;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			EQUAL_CHECK(8, j.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "+Int",
		[]()
		{
			// -------------------------
			int expected = -8;
			Int i = -8;
			i = +i;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "-Int",
		[]()
		{
			// -------------------------
			int expected = -8;
			Int i = 8;
			i = -i;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "~Int",
		[]()
		{
			// -------------------------
			int expected = 0x00008000;
			Int i = 0xFFFF7FFF;
			i = ~i;

			// -------------------------
			EQUAL_CHECK(expected, i.get());
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "!Int",
		[]()
		{
			// -------------------------
			bool expected = false;
			Int i = 23;
			bool actual = !i;

			// -------------------------
			EQUAL_CHECK(expected, actual);
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int && Int",
		[]()
		{
			// -------------------------
			bool expected = true;
			Int i = 23;
			Int j = 1;
			bool actual = i && j;

			// -------------------------
			EQUAL_CHECK(expected, actual);
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int || Int",
		[]()
		{
			// -------------------------
			bool expected = false;
			Int i = 0;
			Int j = 0;
			bool actual = i || j;

			// -------------------------
			EQUAL_CHECK(expected, actual);
			return 0;
		}
	));

	allUnitTests.push_back(UnitTest(
		"Int", "Int + Int",
		[]()
		{
			// -------------------------
			int expected = 18;
			Int i = 6;
			Int j = 12;
			Int result = i + j;

			// -------------------------
			EQUAL_CHECK(expected, result.get());
			return 0;
		}
	));

	// END Unit Test Definitions
	//////////////////////////////
}