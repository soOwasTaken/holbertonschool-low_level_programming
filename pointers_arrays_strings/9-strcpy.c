#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * *_strcpy - Entry point
 * @dest: pointer of destination
 * @src: pointer of source
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < src[i]; i++)
		dest[i] = '\0';
	return (dest);
}
