#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 0;
	long int b = 0, c = 1, d;

	while (a < 50)
	{
		d = b + c;
		b = c;
		c = d;
		printf("%lu", d);

		if (a < 49)
		{
			printf(",");
		}
		a++;
	}
	putchar('\n');
	return (0);
}
