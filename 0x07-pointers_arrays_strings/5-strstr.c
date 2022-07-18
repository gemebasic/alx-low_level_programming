#include "main.h"

/**
 * _strstr-> function
 * @haystack: first argument
 * @needle: second argument
 * Return: return value
 */
char *_strstr(char *haystack, char *needle)
{
	int a = 0, b = 0;

	while (haystack[a])
	{
		while (needle[b])
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			b++;
		}
		if (needle[b] == '\0')
		{
			return (hastack + a);
		}
		a++;
	}
	return ('\0');
}
