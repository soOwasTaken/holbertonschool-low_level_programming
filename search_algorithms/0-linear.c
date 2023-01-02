#include "search_algos.h"

/**
 * linear_search - linear search of a interger
 * @array: The array to search into
 * @size: Number of elements in @array
 * @value: index value to look up for
 * Return: index or error
 **/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
