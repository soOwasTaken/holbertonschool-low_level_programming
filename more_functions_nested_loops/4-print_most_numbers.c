#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
* print_most_numbers - call point
* i: first integrer
* Return: void
*/
void print_most_numbers(void)
{
  while (i <= 9)
    {
      if(i == 2 || i == 4)
        i++;
    i++;
    _putchar(i + '0');
    }
}
