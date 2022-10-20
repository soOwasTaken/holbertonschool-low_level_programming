#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
	{
	int i, r;

	for (i = 1; i < argc; i++)
	{
	if (argc != 3)
	{
		printf("%s \n", "Error");
		return (1);
	}
	else
		r = ((atoi(argv[1])) * (atoi(argv[2])));
	}
	printf("%d\n", r);
	return (0);
}
