#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  * *_strdup - copy str to str
  * @str: the first var
  * Return: return string
  */
char *_strdup(char *str)
{
	char *s;
	int i, size;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str);
	i = 0;
	s = malloc(size * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
