#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int a = 0;
	int s = 0;

	while (a < 1024)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			s += a;
		}
		a++;
	}
	printf("%d\n", s);
	return (0);
}
