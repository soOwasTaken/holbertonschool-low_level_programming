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
	if ((s1 == NULL) || (s2 == NULL))
			return (NULL);
		while (*s1)
		{
			if (_strchr(s2, *s1))
			{
				return (s1);
			}
			else
			{
				s1++;
			}
		}
		return (NULL);
}
