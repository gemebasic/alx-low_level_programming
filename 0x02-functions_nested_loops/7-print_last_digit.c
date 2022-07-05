#include "main.h"

/**
 * print_last_digit-> to print lasat digit of number
 * @x: argument for the function
 * Return: return last digit
 */
int print_last_digit(int x)
{
	int n;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
