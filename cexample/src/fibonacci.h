/**
 * @copydoc fibonacci.cpp
 */
#ifndef SRC_FIBONACCI_H_
#define SRC_FIBONACCI_H_

class Fibonacci
{
private:
	int current;
	int previous;
public:
	Fibonacci(int first, int second);
	int getNext();
};



#endif /* SRC_FIBONACCI_H_ */
