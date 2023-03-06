#include <stdio.h>
/**
  * *_strchr - copy if you find char
  * @s: the first var
  * @c: the second var
  * Return: return char
  */
char *_strchr(char *s, char c)
{
	unsigned int i;
	unsigned int j = 0;
	
	i = 0;
	while (*(s + i) != '\0')
	{
		if(*(s + i) == c)
		{
			while (*(s + i) != '\0')
			{
				*(s + j) = *(s + i);
				j++;
				i++;
			}
			*(s + j) = *(s + i);
			return (s);
		}

	}
	return (NULL);
}
