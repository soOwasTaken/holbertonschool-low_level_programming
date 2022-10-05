#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_to_98 - call point
 * @n: int asked
 *
 * Return: every natural numbers until it reach 98
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n--;
		else
			n++;
	}
	printf("98\n");
}
