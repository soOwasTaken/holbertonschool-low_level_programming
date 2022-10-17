#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - Entry point
 * @s: string
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
