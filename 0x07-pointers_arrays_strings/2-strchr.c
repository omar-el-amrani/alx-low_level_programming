#include <stdio.h>
/**
  * *_strchr - copy if you find char
  * @s: the first var
  * @c: the second var
  * Return: return char
  */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	return (NULL);
}

