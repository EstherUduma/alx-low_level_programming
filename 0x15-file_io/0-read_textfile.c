#include "main.h"

/**
* read_textfile - function that reads a text file and prints it
*
* @filename: pointer
*
* @letters: number of letter it should read and print
*
* Return: returns the actual number of letters it could read and print
*
* File_name: 0-read_textfile.c
*
* Author: Esther Ann Uduma
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	read_count = read(file_descriptor, buffer, letters);
	write_count = write(STDOUT_FILENO, buffer, read_count);

	close(file_descriptor);
	free(buffer);

	if (write_count < 0 || write_count != read_count)
		return (0);

	return (write_count);
}
