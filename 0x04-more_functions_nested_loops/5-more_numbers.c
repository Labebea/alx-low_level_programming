#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: no value
 */
void more_numbers(void)
{
	int times, numb;

	for (times = 0; times < 10; times++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb < 10)
			{
				_putchar('0' + numb);
			}
			else if (numb > 9)
			{
				_putchar('0' + numb / 10);
				_putchar('0' + numb % 10);
			}
		}
		_putchar('\n');
	}
}
