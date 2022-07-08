#include "main.h"

/**
 * print_triangle-> returns traingle
 *@size: argument of the function
 *
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j > size - i)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
