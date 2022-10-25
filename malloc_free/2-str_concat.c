#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *str_concat - Entry point
 *@s1: string1
 *@s2: string2
 * Return: new_str
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len;
	char *new_str;

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if ((s1 == NULL) && (s2 != NULL))
		s1 = "";
	if ((s2 == NULL) && (s1 != NULL))
		s2 = "";
	if (s2 && s1 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	new_str = malloc(s1_len + s2_len + 1);
	if (new_str == NULL)
		return (NULL);
	memcpy(new_str, s1, s1_len);
	memcpy(new_str + s1_len, s2, s2_len + 1);
	return (new_str);
}
