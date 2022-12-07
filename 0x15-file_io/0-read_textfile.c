#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - read and prints the input file
 * @filename: input file
 * @letters: input content into the file
 * Return: display on the terminal of the content
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t count_rd, count_wr;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	count_rd = read(fd, buf, letters);
	count_wr = write(STDOUT_FILENO, buf, count_rd);

	if (fd == -1 || count_rd == -1 || count_wr != count_rd)
	{
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);

	return (count_wr);

}
