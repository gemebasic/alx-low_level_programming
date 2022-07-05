#include "main.h"

/**
 * print_to_98-> to print number upto 98
 * @n: function argument
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		if( n !> 98)
		{
		_putchart(n);
		_putchar(',');
		_putchar(' ');
		}
		n++
	}
	while (n > 98)
	{
		if (n !< 98)
		{
			_putchar(n);
			_putchar(',');
			_putchar(' ');
		}
		n--
	}
}
