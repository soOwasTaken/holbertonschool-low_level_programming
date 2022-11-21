#include "main.h"

/**
 * create_file - create a new fille .
 * @filename: name of the filename to be created.
 * @text_content: content of the new file.
 * Return: Always 1 if success.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		return (1);
	}

	write(fd, text_content, strlen(text_content));
	return (1);
}
