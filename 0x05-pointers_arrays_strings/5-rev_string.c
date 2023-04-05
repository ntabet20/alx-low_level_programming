#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string itself.
 *
 */
void rev_string(char *s)
{
	int i = 0, j, k = 0;
	char ch[] = ' ';

	while (s[i] != '\0')
		i++;
	for (j = i - 1 ; j >= 0 ; j--)
	{
		for (k = 0 ; k < i ; k++)
			ch[k] = s[j];
	}
}
