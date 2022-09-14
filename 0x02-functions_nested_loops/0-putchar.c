#include <stdio.h>
/**
 *main - prints "_putchar" followed by a new line
 *Return: Always (0) Success
 */
int main(void)
{
	char S[] = "_putchar";
	int i = 0;

	while (S[i] != '\0')
	{
		putchar(S[i]);
		i++;
	}
	putchar(10);

	return (0);
}
