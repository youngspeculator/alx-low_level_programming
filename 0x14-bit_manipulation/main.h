#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

unsigned int binary_to_uint(const cahr *b); /* converts a binary number to uint */
void print_binary(unsigned long int n); /* prints the binary representation of a number */
int get_bit(unsigned long int n, unsigned int index); /* returns value of a bit at index */
int set_bit(unsigned long int *n, unsigned int index); /* sets value of a bit to 1 at index */



#endif /*MAIN_H*/
