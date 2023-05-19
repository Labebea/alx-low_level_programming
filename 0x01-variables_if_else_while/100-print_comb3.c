#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		int m = 0;

		while (m < 10)
		{
			if (n < m)
			{
				putchar('0' + n);
				putchar('0' + m);
				if ((n + m) < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
