#include "pch.h"
#include "CppUnitTest.h"
#include "../lab3.2/Window.h"
#include "../lab3.2/Window.cpp"
#include "../lab3.2/TitledWindow.h"
#include "../lab3.2/TitledWindow.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Window baseWindow(100, 200);
			Assert::AreEqual(200, baseWindow.getHeight());
		}
	};
}
