#include "main.h"
#include <string.h>

/**
 * puts2-> pritn every other chararcter
 * @str: argument
 */
void puts2(char *str)
{
	int i, ln;

	ln = strlen(str);
	for (i = 0; i < ln; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
