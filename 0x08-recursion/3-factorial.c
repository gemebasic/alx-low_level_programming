#include "main.h"

/**
 * factorial-> function factorial
 * @n: argfument
 * Return: return value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
