#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strcmp - Entry point
 * @s1: pointer of destination
 * @s2: pointer of source
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
