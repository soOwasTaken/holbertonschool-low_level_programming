#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

if (lastDigit > 5)
{
	int lastDigit = n % 10;
printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
}
else if (lastDigit < 6)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
}
else if (lastDigit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, lastDigit);
}
return (0);
}
