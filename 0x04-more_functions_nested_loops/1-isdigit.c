#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the digit itself.
 *
 * Check is done using the ascii standards
 * Return: Always 1 if a digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
