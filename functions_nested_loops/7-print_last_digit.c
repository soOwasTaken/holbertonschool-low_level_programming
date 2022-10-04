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
int l;
l = n % 10;
return (l);
}
