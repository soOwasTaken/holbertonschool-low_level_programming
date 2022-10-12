#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strncpy - Entry point
 * @dest: pointer of destination
 * @src: pointer of source
 * @n: int n
 * Return: void
 */
int _strcmp(char *s1, char *s2)
{
	int i;

    for (i = 0 ; *s1 == *s2; s1++, s2++, i++)
		if (*s1 == '\0')
	   	 return 0;
    return (*(s1 + i) - *(s2 + i));
}
