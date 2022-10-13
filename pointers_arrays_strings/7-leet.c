#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * leet - Entry point
 * @str: string target
 * Return: str
 */
char *leet(char *str)
{
	char *r = str;
	char l[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == l[i] || *str == l[i] - 32)
				*str = n[i] + '0';
		}
		str++;
	}
	return (r);
}
