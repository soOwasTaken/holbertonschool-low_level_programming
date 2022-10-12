#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * reverse_array - Entry point
 * @a: array
 * @n: the number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1 ; i >= n / 2 ; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
