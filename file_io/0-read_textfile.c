#include "main.h"

/**
 * read_textfile - check the code .
 * @filename: name of the file
 * @letters: letters to read.
 * Return: wr
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
		return (0);

	rd = read(fd, buf, letters);
	if (rd == -1)
		return (0);

	buf[letters] = '\0';
	wr = write(STDOUT_FILENO, buf, rd);
		if (wr == -1)
			return (0);

	close(fd);
	free(buf);
	return (wr);
}
