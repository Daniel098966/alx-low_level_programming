#include "main.h"
#include <stdio.h>
/**
 * _abs - return absolute value of a number
 * @n:  int that will use for the argument of the function
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}
