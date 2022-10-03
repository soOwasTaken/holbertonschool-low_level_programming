#include <stdio.h>
#include "main.h"
#include "unistd.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '_putchar' ;

	while (c)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

	return (0);
}
