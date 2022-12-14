#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: 24 (starting from 00:00 to 23:59)
 */
void jack_bauer(void)
{
	int h;
	int m;

	h = 0;
	m = 0;

	while (h < 24)
	{
		while (m < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
