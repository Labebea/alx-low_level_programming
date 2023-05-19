#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char c;

	c = 0;
	while (c < 10)
	{
		putchar('0' + c);
		c++;
	}
	c = 'a';
	while (c < 'g')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
