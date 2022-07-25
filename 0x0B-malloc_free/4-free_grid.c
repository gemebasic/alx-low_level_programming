#include "main.h"

/**
 * free_grid-> function
 * @grid: first argumen
 * @height: second argumnet
 * Return: value
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i =0; i < height; i++)
		free(grid[i]);
	free(grid);
}
