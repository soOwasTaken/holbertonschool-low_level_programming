#include <stdio.h>
#include <unistd.h>
#include "main.h"

char c = 'a';
int print_alphabet()
{
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
return (0);
}
