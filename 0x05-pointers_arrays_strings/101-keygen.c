#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -  generates random valid passwords for the program
 * Return: Always 0 (success)
 */

int main(void)
{
	int a, sum, b;
	int pass[100];

	sum = 0;

	srand(time(NULL));
	for (a = 0; a < 100; a++)
	{
		pass[a] = rand() % 78;
		sum += (pass[a] + '0');
		putchar(pass[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}
	return (0);
}
