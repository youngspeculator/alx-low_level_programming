#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function which takes in arguments
 * print_opcodes: prints the opcodes in hexadecimal
 * @num_bytes: number of bytes
 *
 * Return: 0
 */

void print_opcodes(int num_bytes)
{
/*declare pointer to unsigned char to point to the mem opcodes will be stored*/
unsigned char *addr = (unsigned char *)&print_opcodes;
for (int i = 0; i < num_bytes; i++)
{
/*prints the value at the memory location pointed to by addr[i]*/
/*`%02x` format specifier prints lowercase hexadecimal, printed as 2 chars*/
printf("%02x", addr[i]);
}
printf("\n");
}

int main(int argc, char *argv[])
{
/*ensure that the user inputs only 2 arguments*/
if (argc != 2)
{
printf("Error\n");
return (1);
}
/*atoi converts the 2nd cmd-line arg to int & stores it in num_bytes variable*/
int num_bytes = atoi(argv[1]);

if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(num_bytes);
return (0);
}
