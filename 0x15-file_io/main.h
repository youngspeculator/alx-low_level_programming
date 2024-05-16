#ifndef MAIN_H
#define MAIN_H

#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

/* reads a text file and prints it to the POSIX standard output */
ssize_t read_textfile(const char *filename, size_t letters);

/* creates a file */ 
int create_file(const char *fileame, char *text_content);

/* appends text at the end of the file */
int append_text_to_file(const char *filename, char *text_context);

/* putchar function */
int _putchar(char c);

#endif
