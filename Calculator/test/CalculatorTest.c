#include "CppUTest/TestHarness.h"

#include "Calculator.h"

TEST_GROUP(calculator)
{

};

TEST(calculator, add)
{
	LONGS_EQUAL(add(3,5), 8);
}

TEST(calculator, sub)
{
	LONGS_EQUAL(sub(3,5), -2);
}

TEST(calculator, mul)
{
	LONGS_EQUAL(mul(3,5), 15);
}
