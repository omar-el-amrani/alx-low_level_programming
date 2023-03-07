#include <stdio.h>
/**
  * *_strpbrk - copy n bytes from array to another
  * @s: the first var
  * @accept: the second var
  * Return: return char
  */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (*(s + i) !=  '\0')
	{
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
