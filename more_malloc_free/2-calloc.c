#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_calloc - Entry point
 * @nmemb: elements
 * @size: bytes each and returns a pointer to the allocated memory.
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb);
	return (ptr);

}
