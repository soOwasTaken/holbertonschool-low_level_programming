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

for (i = 0; i<strlen(s); i--)
	putchar(*(s + i));
}
