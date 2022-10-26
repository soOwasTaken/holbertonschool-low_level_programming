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
	int arr = 0;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * (max - min + 1));

	if (ptr == NULL)
		return (NULL);

	while (min <= max)
	{
		ptr[arr] = min;
		min++;
		arr++;
	}
	return (ptr);
}
