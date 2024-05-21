#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define ERR0 "Usage: cp file_from file_to\n"
#define ERR1 "Error: Can't read from file %s\n"
#define ERR2 "Error: Can't write to %s\n"
#define ERR3 "Error: Can't close fd %d\n"
#define BUFF_SIZE 1024
/**
 * main - this function copies content of a file to another file
 * @argc: counter
 * @argv: variable
 * Return: 1 on success, 0 on failure
 */
int main(int argc, char *argv[])
{
int filedes0, filedes1; /*error handling descriptors*/
ssize_t Writr, Readr; /*reader and writer structs to write and read files*/
char my_buffer[BUFF_SIZE]; /*we'll need a buffer to allocate mem*/

/*check if the number of arguments passed is correct*/
if (argc != 3)
fprintf(stderr, ERR0);
exit(97);
/*if `file_from` does not exist / if you cannot read it*/
filedes0 = open(argv[1], O_RDONLY);
if (filedes0 == -1)
{
fprintf(stderr, ERR1, argv[1]);
exit(98);
}
/*if `write` to `file_to` fails / if you cannot create*/
filedes1 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (filedes1 == -1)
{
fprintf(stderr, ERR2, argv[2]);
close(filedes0); /*close souce file if dest file cannot be opened*/
exit(99);
}
/* read from file_from and write to file_to*/
while ((Readr = read(filedes0, my_buffer, BUFF_SIZE)) > 0)
{
Writr = write(filedes1, my_buffer, Readr);
if (Writr != Readr)
{
fprintf(stderr, ERR2, argv[2]);
close(filedes0);
close(filedes1); 
exit(99);
}
}
if (Readr == -1)
{
fprintf(stderr, ERR1, argv[1]);
close(filedes0);
close(filedes1);
exit(98);
}
/*closing the file descriptors*/
if (close(filedes0) == -1)
{
fprintf(stderr, ERR3, filedes0);
close(filedes1);
exit(100);
}
if (close(filedes1) == -1)
{
fprintf(stderr, ERR3, filedes1);
exit(100);
}
return (1);
}
