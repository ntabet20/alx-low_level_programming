#include "main.h"

/**
 * _isalpha - checks for letter of alphabet
 * @c: represents character to check
 *
 * checks a character whether lowercase or uppercase and gives true
 * Return: Always 1 if condition is true and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
