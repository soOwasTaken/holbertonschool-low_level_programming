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
rev = s;
int i = strlen(s);

for (i; i > 0; i--)
	putchar(*(s + i));
}
