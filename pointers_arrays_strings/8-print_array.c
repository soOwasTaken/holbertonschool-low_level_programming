#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * print_array - Entry point
 * @a: string
 * @n: number of intended array
 * Return: void
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n ; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
}
putchar('\n');
}
