#include "main.h"
/**
 * _isalpha - check for lowercase or uppercase alphabetic character
 * @int c: is character to be checked.
 * Return: (1) if c is a letter, otherwise 0
 */

int _alpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
