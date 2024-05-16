#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - will read a text file and print it to the POSIX stdout
 * @letters: the number of letters it should read and print
 * @filename: the actual filetext to be input
 *  if @filename is NULL, return 0
 *  if write fails or does no write the expected number of bytes return 0
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int filetxt; /* stores the file descriptor returned by open() */
char *buffer; /* to allocate memory for reading file */
ssize_t Readr, Writr; /* Structs to Read and Write the file respectively */

/*check for NULL filename */
if (filename == NULL)
return (0);
/* open the file to be read  */
filetxt = open(filename, O_RDONLY); /* assign filetext variable */
if (filetxt == -1)
return (0);
/* Allocate memory to read */
buffer = malloc(sizeof(char) * (letters + 1)); /* +1 for null terminator */
if (buffer == NULL) /* handle a potential malloc failure */
{
free(buffer);
return (0);
}
/* read contents of the file */
Readr = read(filetxt, buffer, letters);
if (Readr == -1) /* handle if Readr fails */
{
close(filetxt);
free(buffer);
return (0);
}
/* print out the contents of the file */
Writr = write(1, buffer, Readr);
if (Writr == -1) /* handle if Writr fails */
{
close(filetxt);
free(buffer);
return (0);
}
/* close the file */
close(filetxt);
/* free the memory */
free(buffer);
return (Readr); /* return the number of chars actually read fro the file */
}
