#include "variadic_functions.h"
#include <string.h>
/**
 * print_numbers - Entry point
 *@n: number of parameters
 *@separator: separator used between outputs.
 * Return: printings numbers with separators.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;
	unsigned int j;

	va_start(ap, n);
	for (i = n, j = 0; j <= n; i = va_arg(ap, int), j++)
		if (separator != NULL && j <= n - 1)
		{
			printf("%d%s", i, separator);
		}
		else
			printf("%d", i);
	va_end(ap);
	putchar('\n');
}
