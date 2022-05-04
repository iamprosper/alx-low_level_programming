#include "main.h"
/**
 * append_text_to_file - Append a text to a file
 * @filename: The filename
 * @text_content: The string to write
 *
 * Return: 1 in case of success, -1 in case of failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, status, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	status = write(fd, text_content, i);
	if (status == -1)
		return (-1);

	close(fd);
	return (1);
}
