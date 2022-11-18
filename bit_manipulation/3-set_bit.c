#include "main.h"
/**
 * set_bit - call point
 * @n: number to get index from
 * @index: index
 * Return: number with bit changed
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n = *n | (1 << index);
	if (index > 32)
		return (-1);
	return (1);
}
