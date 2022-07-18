#include "main.h"

/**
 * _memcpy-> copies memory area function
 * @dest: first argument
 * @src: second argument
 * @n: third artgument
 * Return: return value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
