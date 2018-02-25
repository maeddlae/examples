/**
 * @file   fibonacci.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Implements Fibonacci calculator
 */
#include "fibonacci.h"
#include "mymath.h"

Fibonacci::Fibonacci(MyMath * mymath)
{
	this->previous = 1;
	this->current = 1;
	this->mymath = mymath;
}

/**
 * Gets the next Fibonacci number
 * @return next Fibonacci number
 */
int Fibonacci::getNext()
{
	int val;
	val = this->mymath->myadd(this->current, this->previous);
	this->previous = this->current;
	this->current = val;
	return val;
}
