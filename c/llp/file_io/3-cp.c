#include "main.h"

#define buffsize 1024

/**
 * main- function
 * @argc: input
 * @argv: input
 * Return: int
 */
int main(int argc, char **argv)
{
	/* var declaration */
	int fd1, fd2, flag;
	ssize_t count;
	char buff[buffsize];

	/* code */
	if (argc != 3)
		err_97();
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 < 0)
		err_98(argv[1]);
	fd2 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd2 > 0)
	{
		flag = 1;
		do {
		count = read(fd1, buff, buffsize);
		if (count < 0)
			flag = -2;
		else
			if (write(fd2, buff, (size_t) count) == -1)
				flag = -1;
		} while (count > 0 && flag > 0);
	}
	else
		flag = -1;
	if (flag == -1)
		err_99(argv[2]);
	if (flag == -2)
		err_98(argv[1]);
	if (close(fd1) == -1)
		err_100(fd1);
	if (close(fd2) == -1)
		err_100(fd2);
	return (0);
}

/**
 * err_97- function
 * Return: void
 */
void err_97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * err_98- function
 * @str: input
 * Return: void
 */
void err_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * err_99- function
 * @str: input
 * Return: void
 */
void err_99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * err_100- function
 * @val: input
 * Return: void
 */
void err_100(int val)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", val);
	exit(100);
}
