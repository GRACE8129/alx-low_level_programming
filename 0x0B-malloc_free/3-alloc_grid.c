#include "main.h"

/**
 * alloc_grid - Returns a 2D array of integers initialized to 0.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: If width or height are <= 0 or if the function fails - NULL.
 *         Otherwise - a pointer to the 2D array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **twoD;
	int h_idx;
	int w_idx;

	if (width <= 0 || height <= 0)
		return (NULL);

	twoD = malloc(sizeof(int *) * height);

	if (twoD == NULL)
		return (NULL);

	for (h_idx = 0; h_idx < height; h_idx++)
	{
		twoD[h_idx] = malloc(sizeof(int) * width);

		if (twoD[h_idx] == NULL)
		{
			for (; h_idx >= 0; h_idx--)
				free(twoD[h_idx]);

			free(twoD);
			return (NULL);
		}
	}

	for (h_idx = 0; h_idx < height; h_idx++)
	{
		for (w_idx = 0; w_idx < width; w_idx++)
			twoD[h_idx][w_idx] = 0;
	}

	return (twoD);
}
