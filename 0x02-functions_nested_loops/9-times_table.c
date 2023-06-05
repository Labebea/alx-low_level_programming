#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: no return value.
 */
void times_table(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;

		while (m < 10)
		{
			if ((n * m) < 10)
			{
				if (m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (n * m));
			}
			else if ((n * m) > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (n * m) / 10);
				_putchar('0' + (n * m) % 10);
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
