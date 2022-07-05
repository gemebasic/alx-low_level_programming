#include "main.h"

/**
 * _abs-> display absolute value
 * @n: argument for absolute value
 * Return: return magnitude
 */
int _abs(int n)
{
	if (n >= 0)
	{
		_putchar(n);
	}
	else
	{
		n = -n;
		putchar(n);
	}
}
