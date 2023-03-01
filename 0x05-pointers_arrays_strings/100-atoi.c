#include <stdio.h>
#include <stdlib.h>
/**
  * _atoi - convert string to int
  *
  * @s: the second var
  * Return: return int
  */
int _atoi(char *s)
{
	int i, j;
	char *sumInt = s;

	j = 0;
	i = 0;
	while (*(s + i) != '\0')
	{
		if ((s[i] == '+' && s[i + 1] >= 48 && s[i + 1] <= 57) || (s[i] == '-' && s[i + 1] >= 48 && s[i + 1] <= 57) || (s[i] >= 48 && s[i] <= 57))
		{
			*(sumInt + j) = s[i];
			j++;
		}
		if (s[i] >= 48 && s[i] <= 57 && s[i+1] == ' ')
		{
			return (atoi(sumInt));
		}
		i++;
	}
	return (atoi(sumInt));
}
