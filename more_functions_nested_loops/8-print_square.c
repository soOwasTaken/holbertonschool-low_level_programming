#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_square - call point
* @size: int required
* Return: a square of @size
*/
void print_square(int size)
{
int a, b;
if (size <= 0)
	putchar('\n');
for (a = 0; a < size; a++)
{
	for (b = 0; b < size; b++)
	{
    _putchar('#');
	}
_putchar('\n');
}
}
