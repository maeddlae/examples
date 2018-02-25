/**
 * @copydoc FibonacciWithPrivateObject.cpp
 */
#ifndef SRC_FibonacciWithPrivateObject_H_
#define SRC_FibonacciWithPrivateObject_H_

#include "mymath.h"

class FibonacciWithPrivateObject
{
private:
	int current;
	int previous;
	MyMath * mymath;
public:
	FibonacciWithPrivateObject(MyMath * mymath);
	int getNext();
};



#endif /* SRC_FibonacciWithPrivateObject_H_ */
