#include "main.h"

/**
 * append_text_to_file - create a new fille .
 * @filename: name of the filename to be created.
 * @text_content: content to append to the file
 * Return: Always 1 if success.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd,wr, i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	while (text_content[i])
		i++;


	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	else
	{
		wr=	write(fd, text_content, i);
	}
	if (wr == -1)
		return(-1);
	close(fd);
	return (1);
}
