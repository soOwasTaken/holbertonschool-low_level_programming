#include "function_pointers.h"
/**
 * print_name - function with two arguments printing name
 * @name: char name that should be printed
 * @f: pointer
 * Description: print name
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
    int i;
	for (i = 0; i < size; i++)
		action(array[i]);
}
