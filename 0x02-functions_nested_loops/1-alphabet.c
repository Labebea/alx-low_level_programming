#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabert, in lowercase
 *
 * Return: no return value
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
