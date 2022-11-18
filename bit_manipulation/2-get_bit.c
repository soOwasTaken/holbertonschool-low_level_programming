#include "main.h"
/**
 * get_bit - call point
 * @n: number to get index from
 * @index: index
 * Return: 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int res = (n >> index) & 1;

	if (index > 32)
		return (-1);
	return (res);
}
