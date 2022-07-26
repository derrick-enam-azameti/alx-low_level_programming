#include <stdlib.h>
/**
 * free_grid - frees the grid
 * @grid: memory grid
 * @height: int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
