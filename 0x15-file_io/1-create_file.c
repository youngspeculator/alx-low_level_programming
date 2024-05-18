#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int filetxt; /* int variable to assign to file descriptor */
int length = 0;

/* check for NULL filename */
if (filename == NULL)
return (-1);

/* open the file with the permission flags */
filetxt = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (filetxt == -1)
return (-1);


/* write the contents to the file */
if (text_content != NULL)
{
while (text_content[length])
length++;

if (write(filetxt, text_content, length) == 1)
{
close(filetxt);
return (-1);
}
}

/* close the file descriptor */
if (close(filetxt) == -1)
return (-1);

return (1);
}
