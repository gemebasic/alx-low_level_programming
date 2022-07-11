#include "main.h"

/**
 * print_rev-> print reverse sting
 * @s: function argument
 */
void print_rev(char *s)
{
	char *str = s;

	while (*(str + 1) > s)
	{
		str++;
		while (str > s)
		{
			char tmp = *str;
			*str-- = *s;
			*s++ = tmp;
		}
	}

}
