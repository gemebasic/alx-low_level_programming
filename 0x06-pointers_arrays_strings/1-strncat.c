include "main.h"

/**
 * _strncat-> concatinate string
 * @dest: first argument
 * @src: second argument
 * @n: variable
 * Return: return values
 */
char *_strncat(char *dest, char *src, int n)
{
	strcat(dest, src, n);
	return (dest);
}
