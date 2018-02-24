/*
 * anotherc.c
 *
 *  Created on: 22 Feb 2018
 *      Author: Mathias Bucher
 */

#include "anotherc.h"
#include "cexample.h"

int mac(int a, int b, int c)
{
	return add(a,b) * c;
}

int mac2(int a, int b, int c)
{
	int x = add(a,b);

	return add(a,c) * x;
}
