#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int b;

	while (a < 9)
	{
		b = 1;
		while (b < 10)
		{
			if (b != a && b > a)
			{
				putchar(a + '0');
				putchar(b + '0');
				if ((a + b) != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		a++
	}
	putchar('\n');
	return (0);
}
