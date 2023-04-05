#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: string to be evaluated with
 * @accept: pointer to substring to check against *s
 * Return: the number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	int i = 0;

	while (*s)
	{
		for (i; s[i] != '\0'; i++)
		{
			if (s[i] == accept[i])
			{
				count++;
				break;
			}

		}

		if (accept[i] == '\0')
		{
			break;
		}
	}
	return (count);
}
