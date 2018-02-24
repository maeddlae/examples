/**
 * @file   fibonacci.cpp
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Implements Fibonacci calculator
 */
#include "fibonacci.h"

Fibonacci::Fibonacci()
{
	this->previous = 1;
	this->current = 1;
}

/**
 * Gets the next Fibonacci number
 * @return next Fibonacci number
 */
int Fibonacci::getNext()
{
	int val;
	val = this->current + this->previous;
	this->previous = this->current;
	this->current = val;
	return val;
}
