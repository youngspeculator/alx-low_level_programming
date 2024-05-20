#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - function that appends text at end of a file
 * @filename: name of the file
 * @text_content: the NULL terminated string to add at EoF
 * Return: 1 on success and -1 on failure
 *
 * Do not create the file if does not exist
 * if filename is NULL return -1
 * if text_content is NULL, do not add anything to the file
 * Return 1 if the file exists
 * Return -1 if doesn't exist, if no permission: r--------
 */
int append_text_to_file(const char *filename, char *text_content)
{
/* Opnr and Writr are file descriptors */
int Openr, Writr, length = 0;

/* check for NULL filename */
if (filename == NULL)
return (-1);

/* measure the length of the argument */
if (text_content !=  NULL)
{
for (length = 0; text_content[length];)
length++;
}

Openr = open(filename, O_WRONLY | O_APPEND);
Writr = write(Openr, text_content, length);

/* if write or open fail return -1 */
if (Openr == -1 || Writr == -1)
return (-1);

close(Openr);

return (1);
}

