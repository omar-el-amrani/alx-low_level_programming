#include <stdio.h>
/**
  * *_strchr - copy if you find char
  * @s: the first var
  * @c: the second var
  * Return: return char
  */
char *_strchr(char *s, char c)
{
	int i, j;
	char str[100];

	j = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + j) != '\0')
			{
				*(str + j) = *(s + i);
				i++;
				j++;
			}
			s = str;
			return (s);
		}
		i++;
	}
	return (NULL);
}
