#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * **alloc_grid - Entry point
 *@width: largeur du tableau
 *@height: longueur du tableau
 * Return: ptr
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	while (i < height)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
			free(ptr);
			return (NULL);
		i++;
	}
	return (ptr);
}
