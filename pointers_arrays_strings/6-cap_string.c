#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * cap_string - Entry point
 * @str: string acquirement
 * Return: str
 */
char *cap_string(char *str)
{
	int i;
	
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		{
		if (str[i - 1] == ' ' ||
		    str[i - 1] == '\t' ||
		    str[i - 1] == '\n' ||
		    str[i - 1] == ',' ||
		    str[i - 1] == ';' ||
		    str[i - 1] == '.' ||
		    str[i - 1] == '!' ||
		    str[i - 1] == '?' ||
		    str[i - 1] == '"' ||
		    str[i - 1] == '(' ||
		    str[i - 1] == ')' ||
		    str[i - 1] == '{' ||
		    str[i - 1] == '}' ||
		    i == 0)
			str[i] -= 32;
		i++;
		}
	}
return (str);
}
