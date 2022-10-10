#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _strlen - Entry point
 * @s: pointer a change value
 * Return: s
 */
int _strlen(char *s)
{
int l = 0;
while (*s != 0)
	{
	s++;
	l++;
	}
return (l);
}
