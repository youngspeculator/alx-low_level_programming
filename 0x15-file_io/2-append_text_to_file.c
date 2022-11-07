#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: file to append to, if NULL return -1
 * @text_content: content to append, if NULL do not append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{	
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filenam, O_WRONLY | O_APPEND)
	w = write(o, text_content, len);

	if (0 == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
