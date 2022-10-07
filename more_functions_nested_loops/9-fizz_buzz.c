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
int n = 99;
int i = 1;
for (i = 1; i <= n; i++)
{
if ((i % 3 == 0) && (i % 5 == 0))
{
printf("FizzBuzz ");
}
else if ((i % 3 == 0) && (i != 0))
{
printf("Fizz ");
}
else if ((i % 5 == 0) && (i != 0))
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("Buzz")
printf("\n");
return (0);
}
