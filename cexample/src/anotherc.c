/**
 * @file   anotherc.c
 * @author Mathias Bucher
 * @date   24 Feb 2018
 * 
 * Simple example of class with two methods.
 */
#include "anotherc.h"
#include "cexample.h"

/**
 * Adds first two arguments (a&b) and multiplies them with c
 * @param a first argument which will be added
 * @param b second argument which will be added
 * @param c argument to multiply
 * @return (a+b) * c
 */
int mac(int a, int b, int c)
{
	return add(a,b) * c;
}

/**
 * Another strange method that does some math.
 * @param a first argument
 * @param b second argument
 * @param c third argument
 * @return (a+b) * (a+c)
 */
int mac2(int a, int b, int c)
{
	int x, y;
	x = add(a,b);
	y = add(a,c);
	return x * y;
}
