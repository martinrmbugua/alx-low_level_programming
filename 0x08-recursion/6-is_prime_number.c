#include "main.h"

/**
 * is_prime - detects if an input number is a prime number
 * @n: inputnumber
 * @c: iterator
 * Return: 1 if n is a prime number. 0 if n is not a prime number
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}


/**
 * is_prime_number - detects if an input number is a prime number
 * @n: input number
 * Return: 1 if n is a prime number. 0 if n is not a prime number.
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
