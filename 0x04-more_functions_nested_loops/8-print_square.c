#include "main.h"
#include <stdio.h>

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: no value
 */
void print_square(int size)
{
	int side1, side2;
	char c = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (side1 = 0; side1 < size; side1++)
		{
			for (side2 = 0; side2 < size; side2++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
