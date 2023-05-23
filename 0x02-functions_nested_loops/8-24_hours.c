#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - prints every minute if the day of JACK BAUER
 *
 * Return: no return value
 */
void jack_bauer(void)
{
	int n = 0;

	while (n < 24)
	{
		int m = 0;

		while (m < 6)
		{
			int i = 0;

			while (i < 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
				_putchar(':');
				_putchar('0' + m);
				_putchar('0' + i);
				_putchar('\n');
				i++;
			}
			m++;
		}
		n++;
	}
}
