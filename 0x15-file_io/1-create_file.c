#include "main.h"

/**
* create_file - function that creates a file
* @filename: pointer to the filename
* @text_content: pointer to the text content to be written
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written_chars;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written_chars = write(fd, text_content, strlen(text_content));
		if (written_chars == -1 || (size_t)written_chars != strlen(text_content))
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
