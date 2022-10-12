#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strncat - Entry point
 * @dest: pointer of destination
 * @src: pointer of source
 * @n: int n
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int dest_len = strlen(dest);
	for (i = 0; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
