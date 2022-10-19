#include <stdio.h>
#include <stdlib.h>
/**
 * main - call point
 * @argc: argc
 * @argv: argv
 * Return: 1 if c is upper, 0 if he isn't
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
