#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: no value
 */
void print_triangle(int size)
{
	int num1, num2;
	char c = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	else if (size > 0)
	{
		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = (size - num1); num2 > 0; num2--)
			{
				_putchar(' ');
			}
			for (num2 = 0; num2 < num1; num2++)
			{
				_putchar(c);
			}
			if (num1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
