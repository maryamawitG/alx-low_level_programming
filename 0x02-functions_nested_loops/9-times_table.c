#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * c : the multiple of a and b
 * Return: void
 */
void times_table(void)
{
	int a = 0;
	int b;
	int m;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			m = a * b;
			if (b == 0)
			{
				_putchar('0' + m);
			}
			else if (m < 10)
			{
				_putchar(' ');
				_putchar('0' + m);
			}
			else
			{
				_putchar('0' + m / 10);
				_putchar('0' + m % 10);
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
