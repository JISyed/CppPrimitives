#ifndef SIMPLE_UNIT_TEST_H
#define SIMPLE_UNIT_TEST_H

#include <string>
#include <functional>

typedef std::function<int()> TestProcedure;

class UnitTest
{
public:
	UnitTest(std::string className,
			 std::string testName,
			 TestProcedure unitTest);
	~UnitTest();
	UnitTest(const UnitTest& rhs);

	// Functor to perform unit test
	int operator()();

private:

	// Disable Default Ctor
	UnitTest();
	
	// Disable object-to-object assignment
	UnitTest& operator=(const UnitTest& rhs) {rhs; return *this;}

	// Data
	//TestProcedure test;
	std::string _className;
	std::string _testName;
	TestProcedure _test;
};



#endif