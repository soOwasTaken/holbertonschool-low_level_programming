#include "main.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * _strlen_recursion - Entry point
 * @s: string to count
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}
