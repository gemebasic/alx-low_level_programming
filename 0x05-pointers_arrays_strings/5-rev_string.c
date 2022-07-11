#include "main.h"

/**
 * rev_string-> print reverse string
 * @s: function argument
 */
void rev_string(char *s)
{
	int i, ln1, ln2, tmp;

	ln1 = 0;
	ln2 = 0;
	while (s[ln1] != '\0')
		ln++;
	ln2 = ln1 - 1;
	for (i = 0; i < ln1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[ln2];
		s[ln2] = tmp;
		ln2--;
	}
}
