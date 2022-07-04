#include <stdio.h>

/**
 * main- the main function has a block of code
 * that display lower case character
 * Return: always return 0
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
