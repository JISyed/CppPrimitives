#ifndef SIMPLE_UNIT_TEST_H
#define SIMPLE_UNIT_TEST_H

#include <string>
#include <functional>

namespace SimpleUnitTestBed
{
	typedef std::function<int()> TestProcedure;

	class UnitTest
	{
	public:
	
		// Specialized Ctor
		UnitTest(std::string className,
				 std::string testName,
				 TestProcedure unitTest);

		// Dtor
		~UnitTest() {}

		// Copy Ctor (needed to put into List<>)
		UnitTest(const UnitTest& rhs);

		// Functor to perform unit test
		int operator()();

	private:

		// Disable Default Ctor
		UnitTest() {}
	
		// Disable object-to-object assignment
		UnitTest& operator=(const UnitTest& rhs) {rhs; return *this;}

		// Data
		std::string _className;
		std::string _testName;
		TestProcedure _test;
	};

} // end namespace
#endif