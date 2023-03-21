#include "main.h"
/**
 * _isalpha - check for lowercase or uppercase alphabetic character
 * @int c: is character to be checked.
 * Return: (1) if c is a letter, otherwise 0
 */

int _alpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c<= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
	
