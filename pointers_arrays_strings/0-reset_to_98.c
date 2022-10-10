#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * reset_to_98 - Entry point
 * @n: pointer value changed
 * Return: void
 */
void reset_to_98(int *n)
{
int *p = &n;
n = 98;
p = &n;
}
