#include <stdio.h>

/**
 * main- the main function has a block of code
 * that display lower case character
 * Return: always return 0
*/
int main(void)
{
	char ch;
	char x;

	for (ch = 'a'; ch <= 'z';)
	{
		putchar(ch);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

