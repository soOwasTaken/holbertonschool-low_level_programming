#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * @s: Returns the number of bytes in the initial segment of s
 * @accept: which consist only of bytes from accept
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k = 0, m = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
				if (s[i] == accept[j])
					{
					k++;
					break;
					}
		}
		else
			k = 0;
			if (k == 0)
			break;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				{
				m++;
				break;
				}
		}
	}
	return (m);
}
