#include "function_pointers.h"
/**
 * array_iterator - function with 2 parameter + a function
 * @array: i mean it's a array
 * @size: size of array
 * @action: function used on the array
 * Description: use a function on a array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		action(array[i]);
	}
}
