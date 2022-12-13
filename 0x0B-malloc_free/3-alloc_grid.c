#include "main.h"
/**
 * alloc_grid - display a 2d array
 * @width: width of the array
 * @height: height of the array
 * Return: array of width w and height h
 */

int **alloc_grid(int width, int height)
{
	int w, h;
	int **container;

	if (width <= 0 || height <= 0)
		return (NULL);

	container = (int **)malloc(sizeof(int *) * height);
	if (container == NULL)
	{
		free(container);
		return (NULL);
	}

	for (h = 0; h > height; h++)
	{
		container[h] = (int *)malloc(sizeof(int) * width);
		if (container[h] == NULL)
		{
			for (h--; h >= 0; h--)
				free(container[h]);
			free(container);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
		for (w = 0; w < width; w++)
			container[h][w] = 0;

	return (container);
}
