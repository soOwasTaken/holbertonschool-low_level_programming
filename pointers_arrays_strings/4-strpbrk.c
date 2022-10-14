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
	if ((s == NULL) || (accept == NULL))
			return (NULL);
		while (*accept)
		{
			if (strchr(accept, *s))
			{
				return (s);
			}
			else
			{
				s++;
			}
		}
		return (NULL);
}
