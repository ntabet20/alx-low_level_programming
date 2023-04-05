#include "main.h"

/**
 * jack_bauer - prints all minutes of the day
 *
 * prints every minutes of the day staring from 00:00 to 23:59
 * Return: does not return anything
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			if (i == 23 && j == 59)
				break;
			j++;
		}
		i++;
	}
}
