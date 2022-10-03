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
	c = '\_putchar';
	_putchar(c);
	_putchar("\n");
	return (write(1, &c, 1));
}
