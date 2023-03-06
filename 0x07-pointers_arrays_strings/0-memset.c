#include <stdio.h>
/**
  * *_memset - fills the first n byes with constant byte b
  * @s: the first var
  * @b: the second var
  * @n: the third var
  * Return: return char
  */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i <= n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
