#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the charcter \ should be printed
 * Return: no value
 */
void print_diagonal(int n)
{
	int numb, numb2;
	char c = '\\';

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (numb2 = 0; numb2 < n; numb2++)
		{
			for (numb = 0; numb < numb2; numb++)
			{
				_putchar(' ');
			}
			_putchar(c);
			if (numb2 == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}

