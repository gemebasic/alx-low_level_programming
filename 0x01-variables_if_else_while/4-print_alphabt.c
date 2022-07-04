#include <stdio.h>

/**
 * main- display char except q
 * Return: always return 0
*/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
		putchar('\n');
	}
	return (0);
}
