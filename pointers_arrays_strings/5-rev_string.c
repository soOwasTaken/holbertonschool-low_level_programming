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
char str[10];
int i, left, right, len;
int c, d;
char rev;
str[10] = "My School";
char temp;
len = strlen(str);
left = 0;
right = len - 1;
for (i = left; i < right; i++) {
	temp = str[i];
	str[i] = str[right];
	str[right] = temp;
	right--;
}
*s = rev;
}
