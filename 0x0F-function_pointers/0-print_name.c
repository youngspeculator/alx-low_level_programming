#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - is a function that prints a name
 * @name: name of the person `to be printed`
 * @f: pointer to the function
 * Return: NULL upon success
 */

void print_name(char *name, void (*f)(char *))
{
/*
 * declaring some varaibles to describe shit that will be operational in my /
 * code
 * decalaring `parameters` in case there is invalid input into my code
 * first instinct when dealing with pointers is the allocation and /
 * deallocation of memory  LOOK MORE INTO THIS
 * declare the pointer  GOOD THINKING BUT IT'S ALREADY DECLARED
 */

if (name == NULL || f == NULL)
return;
(*f)(name);
}
