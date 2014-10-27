#ifndef SIMPLE_UNIT_TESTER_H
#include "SimpleUnitTester.h"
#endif
#include <list>
#include "UnitTest.h"

// Include all classes you want to test here:
#include "../Int.h"
/////////////////////////////////////////////


// NOTE: All unit tests return 0 on success, 1 on failure
void SimpleUnitTester::createAllTests(UnitTestList& allUnitTests)
{
	//////////////////////////////
	// BEGIN Unit Test Definitions
	// 0 = success, 1 = failure

	allUnitTests.push_back(UnitTest(
		"Int Object", "Some Test",
		[]()
		{
			return 0;
		}
	));

	// END Unit Test Definitions
	//////////////////////////////
}