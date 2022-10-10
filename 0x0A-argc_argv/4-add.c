#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers.
 * If no number is passed to the program, print 0
 * If one number contains symbols that aren't digits print Error, return 1
 * assume that numbers and the addition of all numbers can be stored in int
 *
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!((argv[i][j] >= '0' && argv[i][j] <= '9') || argv[i][j] == '-'))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
