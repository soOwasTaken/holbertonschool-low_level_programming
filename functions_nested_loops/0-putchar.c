#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _putchar(char c)
{
	_putchar(c);
	_putchar('\n');
	return (write(1, &c, 1));
}
