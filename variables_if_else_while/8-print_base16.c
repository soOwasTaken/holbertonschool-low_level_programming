#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i = 0;
char o = 'a';
while (i <= 9)
{
putchar(i % 10 + '0');
i++;
}
while (o <= 'f')
{
putchar(o);
o++;
}
putchar('\n');
return (0);
}
