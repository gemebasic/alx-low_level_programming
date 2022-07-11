#inlude "main.h"

/**
 * puts_half-> prints half of string
 * @str: function argument
 */
void puts_half(char *str)
{
	int i, len, mid;

	len = strlen(str);
	mid = len / 2;
	for (i = mid; i <= len; i++)
	{
		if (len % 2 != 0)
			_putchar(str[len - 1]);
		else
			_putchar(str[i]);
	}
	_putchar('\n');
}
