#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * swap_int - Entry point
 * @a: pointer a change value
 * @b: pointer b change value
 * Return: void
 */
void swap_int(int *a, int *b)
{
int c, d;
c = *a;
d = *b;
*a = d;
*b = c;
}
