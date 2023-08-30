#include "main.h"

/**
 * is_prime_number - return 1 if input int is prime number
 * if not return 0
 * @n: number
 * Return: int
 */
int is_prime_number(int n){
	int i = 2;

	if (n <= i)
		return (n == i ? 1 : 0);	
	if (n % i == 0)
		return 0;
	return 1;
}
