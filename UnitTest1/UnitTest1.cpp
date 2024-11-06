

#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\HP\source\repos\lab 8.1 itr\lab 8.1 itr\source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            char str1[] = "a+b-c=d";
          

            char expected1[] = "a**b**c**d";
            

            char* result1 = Change(str1);
           

            Assert::AreEqual(expected1, result1); 
          

            delete[] result1;
            
		}
	};
}
