#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _islower - call point
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

