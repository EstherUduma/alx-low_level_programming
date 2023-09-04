#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
*
* @filename: pointer
*
* @text_content: pointer
*
* Return: 1 on success, -1 on failure
*
* File_name: 2-append_text_to_file.c
*
* Author: Esther Ann Uduma
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, counter;
	ssize_t bytes_written;

	file_des = open(filename, O_WRONLY | O_APPEND);
	if (file_des == -1)
		return (-1);

	if (text_content != NULL)
	{
		counter = 0;
		while (text_content[counter])
			counter++;

		bytes_written = write(file_des, text_content, counter);
		if (bytes_written == -1)
			return (-1);
	}

	close(file_des);

	return (1);
}
