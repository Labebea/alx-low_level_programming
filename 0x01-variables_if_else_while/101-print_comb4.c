#include <stdio.h>

/**
 * main - print all possible different combinations of three digits
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
			int l = 0;

			while (l < 10)
			{
				if (n < m && m < l)
				{
					putchar('0' + n);
					putchar('0' + m);
					putchar('0' + l);
					if ((n + m + l) < 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
