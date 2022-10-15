#include <stddef.h>
#include <stdio.h>

#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
void print_name_as_is(char *name);
void print_name_uppercase(char *name);
void print_elem(int elem);
void print_elem_hex(int elem);
int _putchar(char c);

#endif /*FUNCTION_POINTERS_H*/
