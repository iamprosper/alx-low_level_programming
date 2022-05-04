#include "main.h"
/**
 * create_file - A function that create a file
 * @filename: The name of the file to create
 * @text_content: The string to write or print to the file name
 *
 * Return: 1 in case of success, -1 in case of failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len_str;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if(text_content == NULL)
		return (1);
	if (fd != -1)
	{
		len_str = str_len(text_content);
		write(fd, text_content, len_str);
		close(fd);
		return (1);
	}
	return (-1);
}
/**
 * str_len - Get the length of a string
 * @string: The string
 *
 * Return: The length
 */
int str_len(char *string)
{
	int i = 0;

	while (string[++i] != '\0')
		;
	return (i);
}
