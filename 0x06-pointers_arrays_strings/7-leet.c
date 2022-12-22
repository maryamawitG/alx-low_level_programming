#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: str
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	int l = 5;
	char a[5] = {'A', 'E', 'O', 'T', 'L'};
	char b[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		j = 0;
		while (j < l)
		{
			if (str[i] == a[j] || str[i] - 32 == a[j])
				str[i] = b[j];
			j++;
		}
		i++;
	}
	return (str);
}
