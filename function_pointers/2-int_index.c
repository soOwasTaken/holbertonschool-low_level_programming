#include "function_pointers.h"
/**
 * array_iterator - function with 3 parameter + a function
 * @array: array
 * @size: size of array
 * @action: function used on the array
 * Description: use a function on a array
 * Return: void
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
	return(-1);
}