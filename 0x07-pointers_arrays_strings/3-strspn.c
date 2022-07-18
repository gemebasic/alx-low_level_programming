#include "main.h"

/**
 * _strspn-> get length of prifix
 * @s: first argument
 * @accept: second argument
 * Return: return value
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b = 0;
	int c = 0;

	while (s[b])
		b++;
	for (a = 0; a < b; a++)
	{
		if (s[a] == accept[a])
			c++;
	}
	return (c);
}
