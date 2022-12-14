#include "main.h"

#define ERR0 "Usage: cp file_from file_to\n"
#define ERR1 "Error: Can't read from file %s\n"
#define ERR2 "Error: Can't write to %s\n"
#define ERR3 "Error: Can't close fd  %d\n"

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 on success 0 on failure
 */
int main(int argc, char *argv[])
{
	int fd0, fd1;
	ssize_t bytes_r, bytes_w;
	char buf[BUFF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, ERR0), exit(97);

	fd0 = open(argv[1], O_RDONLY);
	if (fd0 == -1)
		dprintf(STDERR_FILENO, ERR1, argv[1], exit(98));

	fd1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd1 == -1)
		dprintf(STDERR_FILENO, ERR2, argv[2], exit(99);

	while ((bytes_r = read(fd0, buf, BUFF_SIZE)) > 0)
	{
		bytes_w = write(fd1, buf, bytes_r);
		if (bytes_w != bytes_r)
			dprintf(STDERR_FILENO, ERR2, argv[2]), exit(99);
	}

	if (bytes_r == -1)
		dprintf(STDERR_FILENO, ERR1, argv[1], exit(98);
	fd0 = close(fd0);
	fd1 = close(fd1);

	if (fd0)
		dprintf(STDERR_FILENO, ERR3, fd0), exit(100);
	if (fd1)
		dprintf(STDERR_FILENO, ERR3, fd1), exit(100);

	return (EXIT_SUCCESS);
}
