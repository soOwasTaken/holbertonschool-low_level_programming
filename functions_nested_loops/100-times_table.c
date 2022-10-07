#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_times_table - call point
 * @n: int asked
 *
 * Return: void
 */
void print_times_table(int n)
{
int a, b, c, d, e, f;
for (a = 0; a < 15; a++)
{
for (b = 0; b < 15; b++)
{
c = a * b;
d = c / 100;
e = (c / 10) % 10;
f = (c % 100) % 10;
if (b == 0)
putchar('0');
else if (c < 10)
{
putchar(' ');
putchar(' ');
putchar('0' + f);
}
else if (c < 100)
{
putchar(' ');
putchar('0' + e);
putchar('0' + f);
}
else
{
putchar('0' + d);
putchar('0' + e);
putchar('0' + f);
}
if (b < 14)
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
