#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_numbers - call point
* i: first integrer
* Return: return result
*/
void print_numbers(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
	_putchar(i + '0');
_putchar('\n');
}
