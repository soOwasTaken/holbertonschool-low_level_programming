#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: void
 */
void puts2(char *str)
{
int i = strlen(str) - 2;
int j = 0;
for (j = 0; j < i ; j++)
	{
	_putchar(*str++);
	str++;
	}
_putchar('\n');
}
