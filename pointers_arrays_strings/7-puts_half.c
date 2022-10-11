#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * puts2 - Entry point
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int i = strlen(str) - 1;
int len = ((strlen(str) / 2));
int n = ((strlen(str) + 1) / 2);
for (; len <= i ; len++)
	if (i % 2 != 0)
		_putchar(*(str + n++));
	else 
		_putchar(*(str + len));
_putchar('\n');
}
