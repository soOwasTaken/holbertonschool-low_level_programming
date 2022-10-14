#include <stdio.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
/**
 * print_chessboard - Entry point
 * @a:  array
 * print a chessboard from a template array of 8
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}