#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
while (i <= 9)
{
putchar(i % 10 + '0');
putchar(44);
putchar(32);
i++;
}

putchar('\n');
return (0);
}
