#include <stdio.h>
/**
  * _strspn - copy n bytes from array to another
  * @s: the first var
  * @accept: the second var
  * Return: return char
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (*(accept + i) !=  '\0')
	{
		j = 0;
		while (*(s + j) != '\0')
		{
			if (*(s + j) == *(accept + i))
				return (j + 1);
			j++;
		}
		i++;
	}
	return (0);
}
