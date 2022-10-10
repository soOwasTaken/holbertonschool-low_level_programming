#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _puts - Entry point
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
char *ptr = *str
while (*ptr != 0)
	putchar(*ptr++);
}
