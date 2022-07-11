#include "main.h"

/**
 * print_array-> to print array
 * @a: function argument
 * @n: function argumnet
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		printf("array[%d] = %d", i, a[i]);
}
