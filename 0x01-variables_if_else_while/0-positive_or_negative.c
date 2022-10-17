#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * n: stores a different value every time you run program
 * [don’t have to understand what rand, srand, RAND_MAX do.]
 * if the number is greater than 0: output will be is positive
 * if the number is 0: is zero
 * if the number is less than 0: is negative
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
