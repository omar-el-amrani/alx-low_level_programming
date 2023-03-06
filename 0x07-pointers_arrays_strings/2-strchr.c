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
	int j;

	j = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + j) != '\0')
			{
				*(s + j) = *(s + i);
				j++;
				if (*(s + i) != '\0')
				{
					i++;
				}
				else 
				{
					*(s + j) = '\0';
				}
			}
			return (s);
		}
		i++;
	}
	return (NULL);
}
