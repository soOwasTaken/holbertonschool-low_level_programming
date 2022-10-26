#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *array_range - function that creates an array of integers.
 * @min: min value of integer
 * @max: max value of integer
 * Return: void
 */
int *array_range(int min, int max)
{
	void *ptr;
	int i = 0;

	if (min >= max)
		return (NULL);
	ptr = malloc(max + 1);
	for (i = 0 ; min <= max ; i++)
		ptr[i] = (min + 1);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
