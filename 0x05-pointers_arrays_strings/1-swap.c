#include "main.h"

/**
 * swap_int-> interchange the value of the variable
 * @a: argument of the function
 * @b: argumemngt of the function
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}
