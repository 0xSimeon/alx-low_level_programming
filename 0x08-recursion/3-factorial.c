#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: int input to compute it's factorial value
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1); /* returns error */
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
