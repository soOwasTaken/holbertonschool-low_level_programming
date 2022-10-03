#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char ch = 'a';
char cha = 'A';
char n = '\n';

while (ch <= 'z' && cha <= 'Z')
{
if (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch > 'z' && cha <= 'Z')
{
putchar(cha);
cha++;
}
putchar(n);
}

return (0);
}
