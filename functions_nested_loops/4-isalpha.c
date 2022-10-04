#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - call point
 * @c: is the int checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

