#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2-d array of integers.
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 *
 * @width: columns of grid
 * @height: rows of grid
 * Return: pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	i = j = 0;
	if (height < 1)
		return (NULL);
	p = (int **)malloc(height * sizeof(p));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(p[j]);
			free(p);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}

