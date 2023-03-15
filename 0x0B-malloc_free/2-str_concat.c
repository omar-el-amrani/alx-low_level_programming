#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *str_concat - concat str to str
  * @s1: the first var
  * @s2: the second var
  * Return: return string
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size1, size2;

	size1 = 0;
	size2 = 0;
	if (s1 != NULL)
		size1 = strlen(s1);
	if (s2 != NULL)
		size2 = strlen(s2);
	i = 0;
	s = malloc((size1 + size2 +1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < (size1 + size2))
	{
		if (i < size1)
			s[i] = s1[i];
		else if ((i - size1) < size2)
			s[i] = s2[i - size1];
		i++;
	}
	s[i] = '\0';
	return (s);
}
