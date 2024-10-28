#include "pch.h"
#include "CppUnitTest.h"
#include "../LAb_08.1string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(CppStandardTests)
	{
	public:

		TEST_METHOD(TestCountStars_CppStandard)
		{
			Assert::AreEqual(1, CountStarsUsingCpp("abc***def"));
			Assert::AreEqual(1, CountStarsUsingCpp("abc**def***gh"));
			Assert::AreEqual(2, CountStarsUsingCpp("***abc***"));
			Assert::AreEqual(0, CountStarsUsingCpp("abc"));
		}

		TEST_METHOD(TestReplaceStars_CppStandard)
		{
			std::string str1 = "abc***def";
			Assert::AreEqual("abc!!def", ReplaceStarsUsingCpp(str1).c_str());

			std::string str2 = "abc**def***gh";
			Assert::AreEqual("abc**def!!gh", ReplaceStarsUsingCpp(str2).c_str());

			std::string str3 = "***abc***";
			Assert::AreEqual("!!abc!!", ReplaceStarsUsingCpp(str3).c_str());
		}
	};
}
