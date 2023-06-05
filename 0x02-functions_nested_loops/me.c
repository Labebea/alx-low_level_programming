#include <stdio.h>

int main(void)
{
	int i;

	i = -10;

	while (i < 10)
	{
		putchar('0' + i);
		putchar(',');
		i++;
	}
	putchar('\n');
	return (0);
}
