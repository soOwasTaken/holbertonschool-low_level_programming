#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _strcat - Entry point
 * @dest: pointer of destination
 * @src: pointer of source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;

	for (i = 0 ; i < src[i] != aq\0aq ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = aq\0aq;

	return (dest);
}
