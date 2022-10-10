#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers.
 * program should print the result of the multiplication followed by new line
 * assume that the 2 numbers and result can be stored in integer
 * If program doesn't receive 2 arguments, your program should print Error,
 * followed by a new line, and return 1
 *
 * m1: number 1
 * m2: number 2
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int m1, m2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	m1 = atoi(argv[1]);
	m2 = atoi(argv[2]);
	printf("%d\n", m1 * m2);
	return (0);
}
