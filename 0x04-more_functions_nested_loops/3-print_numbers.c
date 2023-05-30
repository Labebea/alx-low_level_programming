#include "main.h"
#include <stdio.h>

/**
 * print_numbers - prints the numbers from 0 to 9
 *
 * Return: no value
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
