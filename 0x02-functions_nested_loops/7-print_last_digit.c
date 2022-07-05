#include "main.h"

/**
 * print_last_digit-> to print lasat digit of number
 * @x: argument for the function
 * Return: return last digit
 */
int print_last_digit(int x)
{
	int n;

	if (x < 0)
		x = -x;
	n = x % 10;
	_putchar(n + '0');
	return (n);
}
