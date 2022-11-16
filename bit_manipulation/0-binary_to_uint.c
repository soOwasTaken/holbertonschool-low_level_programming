#include "main.h"

/**
 * binary_to_uint - call point
 * @b: binary number to convert
 * Return: decimal of the binary number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
	return (0);

	while (b[i] == '0' || b[i] == '1')
	{	/* Found another digit.*/
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}
