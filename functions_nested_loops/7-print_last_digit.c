#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - call point
 * @n: is the int checked
 * Return: last digit
 */
int print_last_digit(int n)
{
int a, m;
a = (n % 10);
m = '0' + a;
_putchar(a);
return (m);
}
