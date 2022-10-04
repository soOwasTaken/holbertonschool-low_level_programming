#include <stdio.h>
#include <unistd.h>
#include "main.h"
int main(void)
{
    print_alphabet();
    return (0);
}


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
