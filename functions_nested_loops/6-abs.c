#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _abs - call point
 * @n: is the int checked
 * Return: absolute value
 */
int _abs(int n)
{
return ((n >> 31 | 1) * n);
}
