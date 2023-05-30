#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line
 * @n: number pf time the character _ should be printed
 * Return: no value
 */
void print_line(int n)
{
	char c = '_';
	int numb1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (numb1 = 0; numb1 < n; numb1++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}

