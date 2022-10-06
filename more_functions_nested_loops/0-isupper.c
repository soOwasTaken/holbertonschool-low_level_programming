#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _isupper - call point
 * @c: is the int checked
 * Return: 1 if c is upper, 0 if he isn't
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

