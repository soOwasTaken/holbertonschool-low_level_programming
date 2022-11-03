#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - addition operator
 * @a: first int
 * @b: second int
 * Return: difference between 2 numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - addition operator
 * @a: first int
 * @b: second int
 * Return: difference between 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - addition operator
 * @a: first int
 * @b: second int
 * Return: divide 2 numbers, or exit 100 if divided by 0
 */
int op_div(int a, int b)
{
    if (b == 0)
        printf("Error\n");
        exit(100);
	return (a / b);
}
/**
 * op_div - addition operator
 * @a: first int
 * @b: second int
 * Return: returns the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
    if (b == 0)
        printf("Error\n");
        exit(100);
	return (a % b);
}
