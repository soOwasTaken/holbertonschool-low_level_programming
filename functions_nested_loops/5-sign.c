#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - call point
 * @n: is the int checked
 * Return: 1 if positive , 0 if zero , -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
		_putchar('\n');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
		_putchar('\n');
	}
	else
	{
		return (-1);
		_putchar('-');
		_putchar('\n');
	}
}
