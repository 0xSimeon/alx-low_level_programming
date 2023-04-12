#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - pointer to a 2 dimensional array of integers.
 * @width: width input argument
 * @height: height input argument
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **elem;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * height);

	if (elem == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		elem[x] = malloc(sizeof(int) * width);

		if (elem[x] == NULL)
			for (; x >= 0; x--)

				free(elem[x]);

			free(elem);
			return (NULL);
	}

	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			elem[x][y] = 0;

	return (elem);
}
