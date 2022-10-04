#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - call point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
}
