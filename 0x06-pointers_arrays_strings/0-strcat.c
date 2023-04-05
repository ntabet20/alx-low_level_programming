#include "main.h"

/**
 * _strcat - it concatenates two strings.
 * @dest: first string.
 * @src: second string.
 *
 * Return: Always gives the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (src[i])
		i++;
	for (j = 0 ; src[j] ; ++j, i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
