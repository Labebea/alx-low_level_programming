#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int n = 0;

	while (n < 100)
	{
		int m = 0;

		while (m < 100)
		{
			if (n < m)
			{
				putchar('0' + n / 10);
				putchar('0' + n % 10);
				putchar(' ');
				putchar('0' + m / 10);
				putchar('0' + m % 10);
				if ((n + m) < 197)
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
