#include "main.h"

/**
 * more_numbers-> display number msny times
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (y > 10)
				_putchar((j / 10) '0');
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}