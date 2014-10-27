#ifndef SIMPLE_UNIT_TEST_H
#include "UnitTest.h"
#endif

#include <iostream>

using namespace SimpleUnitTestBed;

// Specialized Ctor
UnitTest::UnitTest(std::string className,
				   std::string testName,
				   TestProcedure unitTest) :
	_className(className), _testName(testName), _test(unitTest)
{
}

// Functor to perform unit test
int UnitTest::operator()()
{
	const int failures = this->_test();

	if(failures != 0)
	{
		std::cout << "FAILURE: For object \"" << _className << "\" in test \""
			<< _testName << "\"\n\n";
	}

	return failures;
}

// Copy Ctor (needed to put into List<>)
UnitTest::UnitTest(const UnitTest& rhs): 
	_className(rhs._className),
	_testName(rhs._testName),
	_test(rhs._test)
{
}