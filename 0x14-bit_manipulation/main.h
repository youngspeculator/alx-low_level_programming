#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>

unsigned int binary_to_uint(const char *b);
/* converts a binary number to uint */

void print_binary(unsigned long int n);
/* prints the binary representation of a number */

int get_bit(unsigned long int n, unsigned int index);
/* returns value of a bit at index */

int set_bit(unsigned long int *n, unsigned int index);
/* sets value of a bit to 1 at index */

int _putchar(char c);
/* own putchar function */

int clear_bit(unsigned long int *n, unsigned int index);
/* sets the value of a bit to 0 at a given index */

unsigned int flip_bits(unsigned long int n, unsigned long int m);
/* returns the number of bits needed to flip to get from one number to another */

#endif /*MAIN_H*/
