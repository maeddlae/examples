/**
 * @file   FibonacciWithPrivateObject.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Implements FibonacciWithPrivateObject calculator
 */
#include "Fibonacci.h"
#include "mymath.h"

FibonacciWithPrivateObject::FibonacciWithPrivateObject(MyMath * mymath)
{
	this->previous = 1;
	this->current = 1;
	this->mymath = mymath;
}

/**
 * Gets the next FibonacciWithPrivateObject number
 * @return next FibonacciWithPrivateObject number
 */
int FibonacciWithPrivateObject::getNext()
{
	int val;
	val = this->mymath->myadd(this->current, this->previous);
	this->previous = this->current;
	this->current = val;
	return val;
}
