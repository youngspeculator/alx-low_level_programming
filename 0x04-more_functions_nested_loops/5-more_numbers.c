#include <stdio.h>

/**
 * more_numbers - prints 10x the numbers from 0 to 14 followed by a new line
 *
 * Return: (0)
 */

void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y > 9)
				putchar(y / 10 + '0');
			putchar(y % 10 + '0');
		}
		putchar('\n');
	}
}
