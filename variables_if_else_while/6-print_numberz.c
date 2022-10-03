#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char n = '\n';
int i = 0;
while (i <= 9)
{
putchar((char)i % 10 + '0');
i++;
}
putchar(n);
return (0);
}
