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

	size = sizeof(str);
	i = 0;
	s = malloc(size * sizeof(char));
	if (s == NULL || size == 0)
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
