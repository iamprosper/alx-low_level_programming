#include "main.h"
/**
 * read_textfile - Read a text file
 * @filename: The string to print
 * @letters: The number of letters to print
 *
 * Return: The number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = (char *)malloc(sizeof(char) * (letters + 1));
	ssize_t nb = 0;
	int i = -1;

	if (filename == NULL || buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd != -1 && letters > 0)
	{
		read(fd, buf, letters);
		buf[letters] = '\0';
		while (buf[++i] != '\0')
		{
			nb += _putchar(buf[i]);
		}
		close(fd);
		free(buf);
		return (nb);
	}

	return (0);
}
