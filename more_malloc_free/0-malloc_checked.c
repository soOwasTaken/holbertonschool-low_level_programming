#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *malloc_checked - Entry point
 *@b: integer b
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
		exit(98);
	exit(0);
    return(ptr)
}
