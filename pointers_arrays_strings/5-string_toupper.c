#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * string_toupper - Entry point
 * @str: string acquirement
 * Return: str
 */
char *string_toupper(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
	}
	return (str);
}
