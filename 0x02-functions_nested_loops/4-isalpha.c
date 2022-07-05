#include "main.h"

/**
 * _isalpha-> display char
 * @c: argument for int
 * Return: return 0 or 1
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
