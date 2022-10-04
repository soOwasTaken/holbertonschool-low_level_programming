#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	char c = '\_putchar';
	_putchar('_');
	_putchar();
	_putchar(c);
	_putchar(c);
	_putchar(c);
	_putchar(c);
	_putchar(c);
	_putchar("\n");
	return (write(1, &c, 1));
}
