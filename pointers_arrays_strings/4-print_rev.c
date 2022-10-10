#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
int i = strlen(s) -1;

for (; i >= 1; i--)
	putchar(*(s + i));
putchar('\n');
}
