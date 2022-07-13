#include "main.h"

/**
 * _strcat-> array of pointer
 * @dest: first argument
 * @src: second argument
 * Return: alway return int
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;
	int lns = 0;
	int lnd = 0;
	int k = 0;
	char *tmp;

	while (dets[i] != '\0')
	{
		lnd++;
		i++;
	}
	while (src[k] != '\0')
	{
		tmp[lns] = src[k];
		lns++;
		k++;
	}
	for (j = 0; j < lns - 1; j++)
	{
		dest[lnd + 1] = tmp[j];
	}
	dest[lnd + 1] = '\0';
	return (dest);

}
