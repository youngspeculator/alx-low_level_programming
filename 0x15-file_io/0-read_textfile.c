#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the file name to be read
 * @letters: numbe of letters to read and print
 * Return: the number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filetxt;
	ssize_t nrd, nwr;
	char *buffer;

	if (filename == NULL)
		return (0);

	filetxt = open(filename, O_RDONLY);
	if (filetxt == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	nrd = read(filetxt, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(filetxt);
	free(buffer);
	return (nwr);
}
