#include "main.h"

/**
 * _isalpha-> display char
 * Return: return 0 or 1
 * @c: argument for int
 */
int _isalpha(int c)
{
	return ((c <= 'a' && c >= 'z') || (c <= 'A' && c >= 'Z'));
}
