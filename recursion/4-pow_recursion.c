#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _pow_recursion -  x power y
 * @x: int x
 * @y: int y
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);
	return (_pow_recursion(x, y - 1) * x);
}
