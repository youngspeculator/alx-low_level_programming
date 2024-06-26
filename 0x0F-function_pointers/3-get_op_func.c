#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_op_func - function that selects the correct function[...]
 * to perform the operation asked by the user.
 * not allowed to declare any other function.
 * @s: operator string
 * Return: int
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int i = 0;

while (ops[i].op)
{
if (*ops[i].op == *s)
return (ops[i].f);
i++;
}
return (NULL);
}
