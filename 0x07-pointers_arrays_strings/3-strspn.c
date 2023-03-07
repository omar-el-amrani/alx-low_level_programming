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
	int j, k;

	j = 0;
	i = 0;
	while (*(s + i) !=  '\0')
	{
		k = 1;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
				k = 0;
			j++;
		}
		if (k == 1)
			return (i);
		i++;
	}
	return (0);
}
