#include "main.h"

/**
* read_textfile - function that reads a text file and prints it
* @filename: a pointer to the file to be read
* @letters: number of letters to be read and printed
* Return: number of letters it read and printed, otherwise 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	size_t read_bytes, write_bytes;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buffer);
		return (0);
	}

	read_bytes = read(fd, buffer, letters);
	write_bytes = write(STDOUT_FILENO, buffer, read_bytes);

	close(fd);

	free(buffer);

	return (write_bytes);
}
