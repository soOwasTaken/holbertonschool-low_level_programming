#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - call point
 * @n: is the int checked
 * Return: l
 */
int print_last_digit(int n)
{
int l, p;
l = n % 10;
if (l < 0)
{
	l = -l;
}
p = '0'+ l;
_putchar(p);
return (l);
}
