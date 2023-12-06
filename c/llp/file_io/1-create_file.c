#include "main.h"

/**
 * create_file- function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	/* var declaration */
	int fd, i;

	/* code */
	if (filename == NULL)
	{
		return (-1);
	}
	else
	{
		fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
		if (text_content)
		{
			i = 0;
			while (text_content[i])
				i++;
			write(fd, text_content, i);
		}
		if (close(fd) == 0)
			return (1);
		else
			return (-1);
	}
}
