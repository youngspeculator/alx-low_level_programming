#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * prints the result of the multiplication, followed by new line
 * assume that the two numbers & result can be stored in n an int
 * if program does not receive 2 arguments print Error, return 1
 * @argc: argument counter
 * @argv: argument vector
 * Num1: number 1
 * Num2: number 2
 * Return: int
 */
int main(int argc, char *argv[])
{
int Num1, Num2;
if (argc != 3)
{
	printf("Error\n");
	return (1);
}
/*atoi function converts arguments from str to int format*/
Num1 = atoi(argv[1]);
Num2 = atoi(argv[2]);
printf("%d\n", Num1 *Num2);
return (0);
}
