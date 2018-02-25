/**
 * @copydoc fibonacci.cpp
 */
#ifndef SRC_FIBONACCI_H_
#define SRC_FIBONACCI_H_

#include "mymath.h"

class Fibonacci
{
private:
	int current;
	int previous;
	MyMath * mymath;
public:
	Fibonacci(MyMath * mymath);
	int getNext();
};



#endif /* SRC_FIBONACCI_H_ */
