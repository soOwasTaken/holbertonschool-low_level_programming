#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_calloc - Entry point
 * @nmemb: elements
 * @size: bytes each and returns a pointer to the allocated memory.
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, j;
	int *ptr;

	if (size <= 0)
		return (NULL);
	ptr = malloc(sizeof(nmemb) * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	for (i = 0; i < size; i++)
	{
		ptr[i] = malloc(size * sizeof(nmemb));
		if (ptr[i] == NULL)
		{
			for (i = i - 1 ; i >= 0 ; i--)
				free(ptr[i]);
		free(ptr);
		}
	}
	for (i = 0 ; j < nmemb; j++)
		ptr[i] = 0;
	return (ptr);
}
