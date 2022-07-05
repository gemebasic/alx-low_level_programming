#include "main.h"

/**
 * print_last_digit-> to print lasat digit of number
 * @x: argument for the function
 * Return: return last digit
 */
int print_last_digit(int x)
{
	if (x < 0)
		x = -x;
	x = x % 10;
	_putchar(x + '0');
	return (x);
}
