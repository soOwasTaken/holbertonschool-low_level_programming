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
    for ( ; *s1 == *s2; s1++, s2++)
	if (*s1 == '\0')
	    return 0;
    return ((*(char *)s1 < *(char *)s2) ? -1 : +1);
}
