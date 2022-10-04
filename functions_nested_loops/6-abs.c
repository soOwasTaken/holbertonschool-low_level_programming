#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_sign - call point
 * @n: is the int checked
 * Return: 1 if positive , 0 if zero , -1 if negative
 */
int _abs(int n)
{
   return (( n >> 31 | 1 ) * n);
}
