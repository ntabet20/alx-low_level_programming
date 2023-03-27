#include "main.h"

/**
 * _strlen - gives us the string length
 * @s: pointer to string.
 *
 * Return: ALways the string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
