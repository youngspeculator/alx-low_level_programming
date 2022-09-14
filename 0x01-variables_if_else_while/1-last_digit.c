#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main- This one assigns random number to variable n each time it is executed
 *	Complete the source code in order to print the last digit
 *	of the number stored in the variable n
 *source code was external
 *The variable n will store a different value every time you run this program
 *You don’t have to understand what rand, srand, and RAND_MAX do.
 *    Please do not touch this code
 *The output of the program should be:
 *     The string Last digit of, followed by
 *            n, followed by
 *     the string is, followed by
 *		if the last digit of n is greater than 5:
 *		   the string and is greater than 5
 *		if the last digit of n is 0: the string and is 0
 *		if the last digit of n is less than 6 and not 0:
 *		the string and is less than 6 and not 0
 *	followe by a new line
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int L;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	L = n % 10;

	if (L > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, L);
	else if (L == 0)
		printf("%s %d is %d and is 0\n", str, n, L);
	else if (L < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, L);
	return (0);
}
