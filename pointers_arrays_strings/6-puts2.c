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
int i = 0;

while (*(str +i))
	{
	_putchar(*(str + i));
	i = i + 2;
	}
_putchar('\n');
}


