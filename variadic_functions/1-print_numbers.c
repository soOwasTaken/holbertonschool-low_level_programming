#include "variadic_functions.h"
#include <string.h>
/**
 * print_numbers - Entry point
 *@n: number of parameters
 *@separator: separator used between outputs.
 * Return: printings numbers with separator between
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(ap, int));
		if (separator != NULL && i != (n - 1))
			printf("%s",separator);
    }
	va_end(ap);
	putchar('\n');
}
