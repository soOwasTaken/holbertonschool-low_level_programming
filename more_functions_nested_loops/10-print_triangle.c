#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_triangle - call point
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = i; j < size; j++)
{
printf(" ");
}
for (j = 1; j <= i; j++)
{
printf("#");
}
printf("\n");
}
printf("\n");
}
