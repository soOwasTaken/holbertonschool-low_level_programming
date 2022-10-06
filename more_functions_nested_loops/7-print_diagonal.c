#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_diagonal - call point
* @n: int required
* Return: void
*/
void print_diagonal(int n)
{
int a, b;
if (n <= 0)
	putchar('\n');
for (a = 0; a < n; a++)
{
	for (b = 0; b < a; b++)
	{
	_putchar(' ');
	}
_putchar('\\');
_putchar('\n');
}
}
