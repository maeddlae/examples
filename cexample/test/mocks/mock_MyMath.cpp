/**
 * @file   mock_MyMath.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Mock for MyMath class.
 */
#include "gmock/gmock.h"
#include "mymath.h"

/**
 * Mocks MyMath
 */
class MockMyMath:MyMath
{
public:
	MOCK_METHOD2(myadd, int(int a, int b));
	MOCK_METHOD2(mymul, int(int a, int b));
};


