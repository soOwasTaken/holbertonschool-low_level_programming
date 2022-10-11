#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * puts_half - Entry point
 * @str: string
 * Return: void
 */
void print_array(int *a, int n)
{
int i;
for(i = 0;i != n ; i++)
{
	if (i < n - 1)
		printf("%d, ",a[i]);
	if (i == n -1)
		printf("%d",a[i]);
}
putchar('\n');
}
