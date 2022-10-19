#include <stdio.h>
#include <stdlib.h>
/**
 * main - call point
 * @argc: argc
 * @argv: argv
 * Return: 1 if c is upper, 0 if he isn't
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		argv[i]++;
		printf("%d\n", i);
	}
	return (0);
}
