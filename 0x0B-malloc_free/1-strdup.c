#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: char argument passed to the function.
 * Return: 0
 */

char *_strdup(char *str)
{
	char *newSpace;
	int k, l = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	k = 0;

	while (str[k] != '\0')
	{
		k++;
	}

	newSpace = malloc(sizeof(char) * (k + 1));

	if (newSpace == NULL)
	{
		return (NULL);
	}

	for (l = 0; str[l]; l++)
	{
		newSpace[l] = str[l];
	}

	return (newSpace);
}
