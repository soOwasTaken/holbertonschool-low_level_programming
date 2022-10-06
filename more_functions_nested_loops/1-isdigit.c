#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isdigit - call point
 * @c: is the int checked
 * Return: 0 if c isn't a digit, 1 if he is
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
