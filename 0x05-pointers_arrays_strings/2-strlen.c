#include "main.h"

/**
 * _strlen-> return length of string
 * @s: function agument
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
