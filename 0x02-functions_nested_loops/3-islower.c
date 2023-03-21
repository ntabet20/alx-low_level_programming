#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The character we want to check
 *
 * checks for lowercase character by returning 1 if true and 0 otherwise
 * Return: Always 1 if condition is true and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
