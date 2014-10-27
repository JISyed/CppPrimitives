#ifndef SIMPLE_UNIT_TEST_H
#include "UnitTest.h"
#endif

UnitTest::UnitTest(std::string className,
				   std::string testName,
				   TestProcedure unitTest) :
	_className(className), _testName(testName), _test(unitTest)
{
}

// Functor to perform unit test
int UnitTest::operator()()
{
	return this->_test();
}

// Disable Default Ctor
UnitTest::UnitTest()
{
}

UnitTest::~UnitTest()
{
}

UnitTest::UnitTest(const UnitTest& rhs): 
	_className(rhs._className),
	_testName(rhs._testName),
	_test(rhs._test)
{
}