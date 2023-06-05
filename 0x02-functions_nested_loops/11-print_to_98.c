#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: number to start printing from
 * Return: no return value
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n < 10)
			{
				if (n >= 0)
				{
					_putchar('0' + n);
				}
				else if (n < 0)
				{

					if (n > (-9))
					{
						_putchar('-');
						_putchar('0' + n / 10);
						_putchar('0' + n % 10);
					}
					else if (n < (-9))
					{
						_putchar('-');
						_putchar('0' + n / 10);
						_putchar('0' + n % 10);
					}
				}
			}
			else if (n > 10)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n < 100)
			{
				_putchar('0' + n / 10);
				_putchar('0' + n % 10);
			}
			else if (n >= 100)
			{
				_putchar('0' + n / 100);
				_putchar('0' + (n % 100) / 10);
				_putchar('0' + (n % 100) % 10);
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

