#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 *@n: number of parameters
 * Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int res;

	va_start(ap, n);
	for (i = 0, res = 0 ; i < n ; i++)
		res += va_arg(ap, int);
	va_end(ap)
return (res);
}
