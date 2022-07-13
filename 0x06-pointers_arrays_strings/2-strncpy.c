#include "main.h"

/**
 * _strncpy-> function pointers
 * @dest: argument 1
 * @src: argument 2
 * @n: variable
 * Return: return value
 */
char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0; src[n] != '\0'; n++)
		dest[n] = src[n];
	dest[n] = '\0';
	return (dest);
}
