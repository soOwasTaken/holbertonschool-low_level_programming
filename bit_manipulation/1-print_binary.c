#include "main.h"

/**
 * print_binary - call point
 * @n: decimal number to convert
 * Return: binary number of the decimal number
 */
void print_binary(unsigned long int n)
{
	long int i = 0, size;
	unsigned long int y, k;

	if (n == 0)
		printf("0");
	y = n;
	while (y != '\0')
	{
		i++;
		y = y >> 1;
	}

	for (size = i - 1; size >= 0; size--)
	{
		k = n >> size;

		if (k & 1)
			printf("1");
		else
			printf("0");
	}
}

