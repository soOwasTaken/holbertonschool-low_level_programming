#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - call point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n = 100;
int i = 1;
for (i = 1; i <= n; i++)
{
if ((i % 5 == 0) && (i != 0))
{
printf("Buzz ");
}
else if ((i % 3 == 0) && (i != 0))
{
printf("Fizz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
