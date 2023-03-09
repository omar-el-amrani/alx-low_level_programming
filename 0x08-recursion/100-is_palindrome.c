#include <stdio.h>
#include "main.h"
/**
  * len_str_omar - get length of a string
  * @a: the first var
  * Return: return int
  */
int len_str_omar(char *s)
{
	if (*(s + 0)=='\0')
	{
		return (0);
	}
	return (1 + len_str_omar(s + 1));
}
/**
 * reverse_str_omar - check if string palindrome with reverse
 * @len: length of string
 * @i: first var
 * @s: string pointer
 * Return: return int
 */
int reverse_str_omar(int len, int i, char *s)
{
	if (i <= len - 1)
	{
		if (*(s + (len - 1)) == *(s + i))
		{
			return (reverse_str_omar(len - 1, i + 1, s));
		}
		return (0);
	}
	return (1);
}
/**
 * is_palindrome - check if the string is palindrome
 * @s: the first var
 * Return : return int 1 if it's palindrome and 0 if it isn't
 */
int is_palindrome(char *s)
{
	int len = len_str_omar(s);

	return (reverse_str_omar(len, 0, s));
}
