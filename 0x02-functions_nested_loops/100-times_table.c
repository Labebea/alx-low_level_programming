#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table 
 * @n: integer
 * Return: no value
 */
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k < 10)
				{
					if (j != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
					_putchar('0' + k);
				}
				else if (k > 9 && k < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + k / 10);
					_putchar('0' + k % 10);
				}
				else if (k > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + k / 100);
					_putchar('0' + (k % 100) / 10);
					_putchar('0' + (k % 100) % 10);
				}
			}
			_putchar('\n');
		}
	}
}
