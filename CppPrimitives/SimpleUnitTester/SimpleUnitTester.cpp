#ifndef SIMPLE_UNIT_TESTER_H
#include "SimpleUnitTester.h"
#endif

// Constructor
SimpleUnitTester::SimpleUnitTester()
	: numOfTests(0), numOfFailures(0)
{
}

// Desructor
SimpleUnitTester::~SimpleUnitTester()
{
}

// Does all the unit tests. Returns number of failed tests.
int SimpleUnitTester::PerformAllTests()
{
	// Create list of all tests
	UnitTestList allUnitTests;

	// Get number of tests
	this->numOfTests = allUnitTests.size();

	////////////////////////
	// See PrivUnitTests.cpp
	this->createAllTests(allUnitTests);
	////////////////////////

	// Perform all the tests
	for(auto itr = allUnitTests.begin(); itr != allUnitTests.end(); ++itr)
	{
		numOfFailures += (*itr)();
	}
	
	return this->numOfFailures;
}

// Get the number of unit tests
int SimpleUnitTester::GetNumberOfTests()
{
	return this->numOfTests;
}

// Get the number failures for all unit tests
int SimpleUnitTester::GetNumberOfFailures()
{
	return this->numOfFailures;
}