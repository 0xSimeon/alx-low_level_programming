#include "main.h"

/**
 * get_prime - computes and checks if a number is prime recursively
 * @n: number to be evaluated.
 * @i: int iterator
 *
 * Return: 1 if n is prime, 0 if otherwise
 */
int get_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (get_primte(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number or not
 * @n: number to checked.
 * Return: 1 if n is a prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, n - 1));
}
