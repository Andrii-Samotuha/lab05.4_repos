#
#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_4/Lab_05_4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab054
{
    TEST_CLASS(UnitTestLab054)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            int N = 17;
            double expected = 38.0 / 35.0;

            Assert::AreEqual(expected, P1(N, 19, 1.0), 0.000001);
            Assert::AreEqual(expected, P2(N, N, 1.0), 0.000001);
            Assert::AreEqual(expected, P3(N, 19), 0.000001);
            Assert::AreEqual(expected, P4(N, N), 0.000001);
            Assert::AreEqual(expected, P5(N), 0.000001);
        }
    };
}
