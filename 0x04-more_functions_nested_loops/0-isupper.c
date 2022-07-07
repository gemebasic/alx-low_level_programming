#include "main.h"

/**
 * _isupper-> to check if the character is upper
 * or not
 * @c: argument of the function
 * Return: return 1 is upper or 0 if not
 */
int _isupper(int c)
{
	if (c == '65' && c <= '91')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
