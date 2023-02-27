#include <stdio.h>
#include <string.h>
/**
  * _strlen - function that  returns the length of string
  *
  * @s: string varible
  * Return: return lenght of string s
  */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
