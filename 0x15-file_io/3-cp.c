#include "main.h"

/**
* file_from - copies the content of a file to another file
*
* @arg1: pointer
*
* @ran: pointer
*
* Return: pointer to the buffer containing the file's content
*/

char *file_from(char *arg1, char *ran)
{
	int ff, cf;
	ssize_t r, tb = 0;

	ff = open(arg1, O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	while ((r = read(ff, ran + tb, 1024)) > 0)
	{
		tb = tb + r;
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	cf = close(ff);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error:  Can't close fd %d\n", ff);
		exit(100);
	}
	return (ran);
}

/**
* main - Copy content from one file to another.
*
* @argc: Number of arguments
*
* @argv: pointer
*
* Return: 1 if successful, -1 if not
*/

int main(int argc, char **argv)
{
	int ft, ct, count;
	ssize_t w;
	char *reading;
	char ran[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	reading = file_from(argv[1], ran);
	ft = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (reading[count])
		count++;

	w = write(ft, reading, count);
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ct = close(ft);
	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ft);
		exit(100);
	}
	return (1);
}
