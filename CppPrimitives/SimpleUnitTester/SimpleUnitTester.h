#ifndef SIMPLE_UNIT_TESTER_H
#define SIMPLE_UNIT_TESTER_H

#include <list>
#include "UnitTest.h"

typedef std::list<UnitTest> UnitTestList;

// NOTE: All unit tests return 0 on success, 1 on failure
class SimpleUnitTester
{
public:

	// Constructor
	SimpleUnitTester();
	// Desructor
	~SimpleUnitTester();

	// Does all the unit tests. Returns number of failed tests.
	int PerformAllTests();

	// Get the number of unit tests
	int GetNumberOfTests();

	// Get the number failures for all unit tests
	int GetNumberOfFailures();

private:

	void createAllTests(UnitTestList& allUnitTests);

	int numOfTests;
	int numOfFailures;
};

#endif