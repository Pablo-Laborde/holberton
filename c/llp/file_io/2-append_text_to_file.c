#include "main.h"

/**
 * append_text_to_file- function
 * @filename: input
 * @text_content: input
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	/* var declaration */
	int fd, i;

	/* code */
	if (filename)
	{
		if (text_content)
		{
			fd = open(filename, O_RDWR | O_APPEND);
			if (fd > 0)
			{
				i = 0;
				while (text_content[i])
					i++;
				write(fd, text_content, i);
			}
			else
				return (-1);
		}
		return (1);
	}
	else
		return (-1);
}
