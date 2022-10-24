#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *_strdup - Entry point
 *@str: string to duplicate
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	char *dup;
	int a, len;

	if (!str)
		return (NULL);

	len = strlen(str);
	dup = malloc(len + 1);
	
	if(dup == NULL)
	{
		return (NULL);
	}

	for(a = 0; str[a] != '\0'; a++)
		dup[a] = str[a];

	return(dup);
}
