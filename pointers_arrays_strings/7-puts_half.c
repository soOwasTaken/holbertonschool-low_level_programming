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
for (; len <= i && i != '\0' ; len++)
	if (n % 2 != 0)
		_putchar(*(str + n++));
	else 
		_putchar(*(str + len + 1));
_putchar('\n');
}
