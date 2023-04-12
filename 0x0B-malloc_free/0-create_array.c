#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of  and assign char c
 * @size: argument to set the  size of array
 * @c: char to be assigned
 * Description: creat array of size of size and assign char c
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
	{	/* if memory is not allocated */
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}

	return (str);
}
