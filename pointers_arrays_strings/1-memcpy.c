#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _memcpy - Entry point
 * @src: source
 * @dest: destination
 * @n: number of bytes
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc = (char *)src;
	char *pdest = (char *)dest;
	unsigned int i;

	for (i = 0; i < n ; i++)
		pdest[i] = psrc[i];

	return (pdest);
}
