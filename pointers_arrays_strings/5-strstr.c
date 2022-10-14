#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 * @haystack:  in the string haystack
 * @needle: first occurrence of the substring
 * Return: void
 */
char *_strstr(char *haystack, char *needle)
{
	int n = strlen(needle);

	while (*haystack)
	{
		if (!memcmp(haystack, needle, n))
		{
			return (haystack);
		}
		haystack++;
	}
	return (0);
}
