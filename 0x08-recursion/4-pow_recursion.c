#include "main.h"

/**
 * _pow_recursion-> function
 * @x: first argument
 * @y: second argument
 * Return: return value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recurstion(x, y - 1));
}
