#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char n = '\n';

while (ch <= 'z')
{
putchar(ch);
ch++;
putchar(n);
}
putchar(n);
return (0);
}
