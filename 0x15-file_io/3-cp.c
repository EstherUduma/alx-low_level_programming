#include "main.h"
#define BUFFER_SIZE 1024

/**
* exitWithError - Displays an error message and exit with the specified code
* @error_message: the error message to display
* @exit_code: the exit code to use when terminating the program
*/

void exitWithError(const char *error_message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", error_message);
	exit(exit_code);
}

/**
* openFile - open a file with the specified flags and mode, and handle errors
* @filename: file name to be opened
* @flags: the file open flags
* @mode: file mode
* Return: the descriptor of the opened file
*/

int openFile(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		exitWithError("Error: Can't open file", 98);
	}
	return (fd);

}

/**
* copyFile - copy the content of one file to another file
* @source_fd: the file descriptor of the source file
* @destination_fd: the file descriptor of the destination file
*/

void copyFile(int source_fd, int destination_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			exitWithError("Error: Can't write to file", 99);
		}
	}

	if (bytes_read == -1)
	{
		exitWithError("Error: Can't read from file", 98);
	}
}

/**
* main - the main function
* @argc: the number of command line arguments
* @argv: the array of command line arguments
* Return: 0 on success or exit with specified error code
*/

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		exitWithError("Usage: cp file_from file_to", 97);
	}

	fd_from = openFile(argv[1], O_RDONLY, 0);
	fd_to = openFile(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	copyFile(fd_from, fd_to);

	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		exitWithError("Error: Can't close file descriptor", 100);
	}

	return (0);
}
