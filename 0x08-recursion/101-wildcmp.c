#include "main.h"

/**
 * strlen_no_wilds - Return the length of a string
 *	ignoring wildcharactetrs
 *	@s: the string to be measured
 *
 *	Return: length
 */
int strlen_no_wilds(char *s)
{
	int len = 0, i = 0;

	if (*(s + i))
	{
		len++;
		i++;
		len += strlen_no_wilds(s + i);
	}
	return (len);
}

/**
 * _iterate_wilds - iterate a string in wildcard
 *	until it points to a non-wild character
 *@ws: the string
 */

void _iterate_wilds(char **ws)
{
	if (**ws == '*')
	{
		(*ws)++;
		_iterate_wilds(ws);
	}
}

/**
 * postfixx - checks if the string mtches the postfix of
 *	another string containing wildcards.
 * @s: the string
 * @postfix: postfix.
 *
 * Return: if s and postfix are identical - a pointer to the
 *	null byte located at the end of postfix
 * otherwise - a pointer to the first unmatched character in postfix
 */

char *postfixx(char *s, char *postfix)
{
	int str_len = strlen_no_wilds(s) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		_iterate_wilds(&postfix);
	if (*(s + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfixx(s, postfix));
	}
	return (postfix);
}

/**
 * wildcmp - compares two strings
 * @s1: string one
 * @s2:string two - may contain wildcarrds
 *
 * Return: if the string can be considered identical - 1.
 *	otherwise - 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		_iterate_wilds(&s2);
		s2 = postfixx(s1, s2);
	}
	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}

