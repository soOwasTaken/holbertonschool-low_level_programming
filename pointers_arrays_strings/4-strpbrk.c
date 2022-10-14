#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strpbrk - Entry point
 * @s:  locates the first occurrence in the string
 * @accept: of any of the bytes in the string
 * Return: void
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
