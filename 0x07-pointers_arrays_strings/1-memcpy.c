#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: destination memory area
 *@src: source memory area
 *@n: number of bytes
 *
 *Return: a pointer to the destination memory area
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a;
	int i = n;

	for (a = 0; a < i; a++)
	{
		dest[a] = src[a]
		n--;
	}

	return (dest);
}

