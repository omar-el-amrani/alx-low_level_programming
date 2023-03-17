#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *string_nconcat - copy str to str
  * @s1: the first var
  * @s2: the second var
  * @n: the third var
  * Return: return char pointer
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *s;

	i = 0;
	s = malloc((n + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		if (i < strlen(s1) )
			s[i] = s1[i];
		else if ((i - (strlen(s1) - 1)) < strlen(s2))
			s[i] = s2[i - (strlen(s1) - 1)];
		i++;
	}
	return (s);
}
