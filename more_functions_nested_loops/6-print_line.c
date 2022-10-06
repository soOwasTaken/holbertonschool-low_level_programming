#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_line - call point
*
* Return: void
*/
void print_line(int n)
{
while ((n > 0))
{
n--;
putchar('_');
}
putchar('\n');
}
