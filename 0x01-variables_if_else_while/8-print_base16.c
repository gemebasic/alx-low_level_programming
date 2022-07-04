#include <stdio.h>

/**
 * main- display hexadecimal
 * Return: always return 0
 */
int main(void)
{
	int x;
	char y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}
	for (y = 'A'; y <= 'F'; y++)
	{
		putchar(y);
	}
	return (0);
}
