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
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (char)b;
	}
	return (s);
}
