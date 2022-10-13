#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _memset - Entry point
 * @s: memory to be filled
 * @b: buffer
 * @n: number of space to fill
 * Return: s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *psrc= (char *)src;
	char *pdest = (char*)dest;
	unsigned int i;
	for (i = 0; i < n ; i++)
		pdest[i] = psrc[i];

	return (pdest);
}
