#include "main.h"

/**
 * get_sqrt - helper function for _sqrt_recursion
 * @n: number to compute the sqaure root
 * @i: input iterator
 *
 * Return: the resulting square root
 */
int get_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (get_sqrt(n, i + 1));
}




/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to compute the square root of
 * Return: the square root value.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (get_sqrt(n, 0));
}
