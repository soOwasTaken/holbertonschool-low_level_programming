#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * _puts - Entry point
 * @str: string
 * Return: void
 */
void print_rev(char *s)
{
char *s;
rev = s;
int i = strlen(s);

for(i;i>=0;i--)
	putchar(*(s+i));
}
