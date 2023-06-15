#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **val;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	val = malloc(sizeof(int *) * height);

	if (val == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		val[x] = malloc(sizeof(int) * width);

		if (val[x] == NULL)
		{
			for (; x >= 0; x--)
				free(val[x]);

			free(val);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			val[x][y] = 0;
	}

	return (val);
}
