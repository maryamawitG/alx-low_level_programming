#include "main.h"
/**
 * *cap_string - capitalizes all words of a string
 * @str: string
 * Return:str
 */
char *cap_string(char *str)
{
	char sp[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"', '(',
		')', '{', '}'};
	int l = 13;
	int i;
	int a = 0;

	while (str[a])
	{
		i = 0;
		while (i < l)
		{
			if ((a == 0 || str[a - 1] == sp[i]) && (str[a] >= 97 && str[a] <= 122))
				str[a] = str[a] - 32;
			i++;
		}
		a++;
	}
	return (str);
}
