#include "main.h"

/**
 * print_binary - call point
 * @n: decimal number to convert
 * Return: binary number of the decimal number
 */
void print_binary(unsigned long int n)
{
	int temp, k;
	int i = 0;

	temp = n;

	while (temp != 0)
	{
		i++;
		temp = temp >> 1;
	}
	if (i == 0)
		_putchar('0');

	for (i = i - 1; i >= 0; i--)
	{
		k = (n >> i);
		if (k & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}

