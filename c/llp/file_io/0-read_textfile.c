#include "main.h"

/**
 * read_textfile- function
 * @filename: input
 * @letters: input
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	/* var declaration */
	int fd;
	ssize_t count;
	char *str;

	/* code */
	if (filename == NULL)
	{
		return (0);
	}
	else
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
		{
			return (0);
		}
		else
		{
			str = malloc(sizeof(char) * letters);
			if (str == NULL)
			{
				close(fd);
				return (0);
			}
			else
			{
				count = read(fd, str, letters);
				write(STDOUT_FILENO, str, count);
				free(str);
				close(fd);
				return (count);
			}
		}
	}
}
