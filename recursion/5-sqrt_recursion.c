#include "main.h"
/**
 * sqrt_square -  multiply i by itself while he reach j
 * @i: int n of _sqrt_recursion
 * @j: n from _sqrt_recursion
 * Return: x power y
 */
int sqrt_square(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	return (sqrt_square(i + 1, j));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_square(1, n));
}
