#include <stdio.h>

/**
 * main- the main function has a block of code
 * that display lower case character
 * Return: always return 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z';)
		putchar(x);
	for (x = 'A'; x <= 'Z'; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

