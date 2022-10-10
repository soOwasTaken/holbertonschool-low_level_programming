#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
int i;

for (i = _strlen(s); i > 0; i--)
	_putchar(*(s + i));
}
