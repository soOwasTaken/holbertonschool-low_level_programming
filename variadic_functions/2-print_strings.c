#include "variadic_functions.h"
#include <string.h>
/**
 * print_strings - Entry point
 *@n: number of parameters
 *@separator: separator used between outputs.
 * Return: printings strings with separator between
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		const char *str = va_arg(ap, const char*);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	putchar('\n');
}
