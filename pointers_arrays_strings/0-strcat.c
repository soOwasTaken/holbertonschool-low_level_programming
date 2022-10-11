#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strcat - Entry point
 * @dest: pointer of destination
 * @src: pointer of source
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
int i;
int dest_len = strlen(dest);
	for (i = 0 ; i < src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '0';

	return (dest);
}
