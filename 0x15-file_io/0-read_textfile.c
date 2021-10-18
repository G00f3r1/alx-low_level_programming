#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf = malloc(letters);
	int fd;
	ssize_t count;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	read(fd, buf, letters);
	close(fd);

	printf("%s", buf);
	count = strlen(buf);

	return (count);
}
