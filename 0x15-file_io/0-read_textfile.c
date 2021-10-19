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
	char *buff = malloc(letters);
	int fd;
	ssize_t count;

	if (!buff)
		return (0);
	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);

	count = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, count);

	free(buff);
	close(fd);
	return (count);
}
