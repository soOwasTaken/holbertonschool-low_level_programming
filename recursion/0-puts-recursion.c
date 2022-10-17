#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _puts_recursion - Entry point
 * @s: character to
 * Return: s
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
