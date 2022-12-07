#include "main.h"
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

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	count_rd = read(fd, buf, letters);
	count_wr = write(STDOUT_FILENO, buf, count_rd);

	close(fd);
	free(buf);

	return (count_wr);

}
