#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * if no number is passed to the program, print 0
 * if one of the numbers contains symbols that are not digits, print Error
 * assume that numbers and the addition of numbers can be stored in an int
 * @argc: argument counter
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int a, b, sum;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (a = 1; a < argc; a++)
{
for (b = 0; argv[a][b] != '\0'; b++)
{
if (!((argv[a][b] >= '0' && argv[a][b] <= '9') || argv[a][b] == '-'))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[a]);
}
printf("%d\n", sum);
return (0);
}
