#ifndef SIMPLE_UNIT_TESTER_H
#define SIMPLE_UNIT_TESTER_H

class SimpleUnitTester
{
public:
	SimpleUnitTester();
	~SimpleUnitTester();

	// Does all the unit tests. Returns number of failed tests.
	int PerformAllTests();

private:

	int numOfTests;
	int numOfFailures;
};

#endif