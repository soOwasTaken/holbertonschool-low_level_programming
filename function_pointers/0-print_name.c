#include <stdio.h>
#include <unistd.h>
#include "function_pointers.h"
/**
 * print_name - function with two arguments printing name
 * @name: char name that should be printed
 * @f: pointer
 * Description: print name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
