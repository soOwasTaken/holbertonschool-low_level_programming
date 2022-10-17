#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 * @needle:  finds the first occurrence of needle
 * @haystack:  in the string haystack
 * The terminating null bytes (\0) are not compared
 * Return: p || NULL
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack != '\0')
    {
        if ((*haystack == *needle) && compare(haystack, needle)) {
            return (haystack);
        }
        haystack++;
    }
 
    return (NULL);
}
