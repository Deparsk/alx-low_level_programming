#include <stdio.h>

/**
 * main - prints all combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)

	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
