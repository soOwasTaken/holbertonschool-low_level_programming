#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: array
 * @size: size of array
 * @cmp: function used on the array
 * Description: use a function on a array
 * Return: matching result of cmp with the array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 1)
	{
	for (i = 0; i <= size; i++)
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
