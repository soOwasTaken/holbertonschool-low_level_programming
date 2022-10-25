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
	int i,j;
	int **ptr;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);

	i = 0;
	for (i = 0; i < height; i++)
	{
		ptr[i]=(int*)malloc(width*sizeof(int));
		if (ptr[i] == NULL)
		{
			for(i = i - 1 ; i >= 0 ; i--)
				free(ptr[i]);
		free(ptr);
		}
	}
	
	for (i = 0 ; j < width; j++)
		ptr[i][j] = 0;
	return (ptr);
}

