#include "main.h"
/**
 * clear_bit - call point
 * @n: number to get index from
 * @index: index
 * Return: number with bit cleared
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 32)
		*n = ~(1 << index) & *n;
	if (index > 32)
		return (-1);
	return (1);
}
