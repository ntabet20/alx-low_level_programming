#include "main.h"

/**
 * _strcpy - copies one string to another.
 * @dest: first string.
 * @src: second string.
 *
 * It copies the content of string pointer by the second
 * including the terminating character into buffer of first.
 * Return: Always the pointer.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; ++i)
		dest[i] = src[i];
	return (dest);
}
