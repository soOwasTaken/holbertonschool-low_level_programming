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
	int size = strlen(b);

	if (b == NULL)
		return (0);
	

	while (i < size)
	{	/* Found another digit.*/
		if (b[i] == '0' || b[i] == '1')
		{
			val <<= 1;
			val += b[i] - '0';
			i++;
		}
		else
			return(0);
	}
	return (val);
}
