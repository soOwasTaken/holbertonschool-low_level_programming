#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - Entry point
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i,j,len;
i = 0;
len = strlen(s);
for (i = 0; i < len / 2; i++) 
{
  j = s[i];
  s[i] = s[len -i -1];
  s[len -i -1] = j;
}
}
