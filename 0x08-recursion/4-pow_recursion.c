#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised to y power 
 * @y: power to raise x value to.
 * Return: result of the power computation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1); /* errors out */
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
