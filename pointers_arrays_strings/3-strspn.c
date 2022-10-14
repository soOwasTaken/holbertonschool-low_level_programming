#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * @s: Returns the number of bytes in the initial segment of s
 * @accept: which consist only of bytes from accept
 * Return: i
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
