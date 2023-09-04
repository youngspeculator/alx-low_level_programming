#include <stdio.h>

/**
 * main - prints all arguments received
 * all arguments should be printed including the 1st one
 * only print one argument per line, ending w/ a new line
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
