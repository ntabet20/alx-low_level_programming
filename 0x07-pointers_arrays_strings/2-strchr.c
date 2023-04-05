#include "main.h"
#include <stddef.h>

/**
 * _strchr - it locates a character in a string.
 * @s: the string
 * @c: the character
 *
 * Return: a pointer to first occurrence of character
 */
char *_strchr(char *s, char c)
{
	for ( ; *s  ; s++)
	{
		if (*s == c)
			return (s);
	}
	return (NULL);
}
