#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: int
 */
int main(int argc, char *argv[])
{
int a, b;
int (*operation)(int, int);

if (argc > 4) /*check if argument count is greater than 4*/
{
printf("Error. Invalid number of arguments!\n");
exit(98);
}

if (argv[2][1]) /*check if the argument vector is longer than one char*/
{
printf("Error. Input is too long!\n"); /*Error message*/
exit(99); /*exit status*/
}

operation = get_op_func(argv[2]);

if (operation == NULL)
{
printf("Error. Invalid operator!\n"); /*Error message*/
exit(99); /*exit status*/
}

a = atoi(argv[1]);
b = atoi(argv[3]);

printf("%d\n", operation(a, b));
return (0);
}
