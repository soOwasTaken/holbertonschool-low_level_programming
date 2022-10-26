#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * *malloc_checked - Entry point
 *@b: integer b
 * Return: a pointer to the allocated memory
 */
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <stddef.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: a pointer to newly allocated space in memory containing
 * the contents of s1 followed by s2 and '\0', else returns NULL
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len, l1, l2, i;  /* declarations */
	char *ptr;

	if ((s1 == NULL) && (s2 != NULL))
		s1 = "";
	if ((s1 != NULL) && (s2 == NULL))
		s2 = "";
	if ((s1 == NULL) && (s2 == NULL))
		s1 = s2 = "";
	if (n == 0)
		s2 = "";
	
	i = n;
	l1 = strlen(s1);               /* innitializations of declarations */
	l2 = strlen(s2);
	j = strlen(s2) - n;

	if (i >= l2)
		len = l1 + l2 + 1;
	len = l1 + i + 1;
	ptr = malloc(len);

	if (ptr == NULL)
		return (NULL);
	memcpy(ptr, s1, l1 + 1);   /* set ptr with content of s1 */
	strcat(ptr, s2);  /*only now we concat s1 and s2 with ptr the new s1*/

	return (ptr);
	free(ptr);
}

