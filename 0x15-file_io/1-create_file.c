#include "main.h"

/**
* create_file - function that creates a file
*
* @filename: pointer
*
* @text_content: pointer
*
* Return: 1 on success, -1 on failure
*
* File_name: 1-create_file.c
*
* Author: Esther Ann Uduma
*/

int create_file(const char *filename, char *text_content)
{
	int file_des;
	ssize_t bytes_written;
	int counter;

	if (filename == NULL)
		return (-1);

	file_des = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (file_des == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	counter = 0;
	while (text_content[counter])
		counter++;

	bytes_written = write(file_des, text_content, counter);

	if (bytes_written == -1)
	{
		close(file_des);
		return (-1);
	}

	close(file_des);
	return (1);
}
