#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * factorial - Entry point
 * @n: int to factor
 * Return: n
 */
int factorial(int n)
{
	if (n == 0)
	return (1);
	if (n < 0)
	return (-1);
	else
	return (n * factorial(n - 1));
}
