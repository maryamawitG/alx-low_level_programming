#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 0, b = 1, c = 0;
	int s = 0;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if (c % 2 == 0)
			s += c;
	}
	printf("%d\n", s);
	return (0);
}
