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
	int *ptr;
	int i = 0;
	int len;
	if (min >= max)
		return (NULL);
	for (i = 0 ; min <= max ; i++)
		len = i;
	ptr = malloc(len * max);
	for (i = 0 ; min <= max ; i++)
		ptr[i] = (min + 1);
	ptr[max] = max;
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
