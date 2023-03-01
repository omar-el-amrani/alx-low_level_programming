#include <stdio.h>
#include <stdlib.h>
/**
  * _strcmp - compare two strings length
  * @s1: the first var
  * @s2: the second var
  * Return: return int
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (*(s1 + i) != '\0' || *(s2 + j) != '\0')
	{
		if (*(s1 + i) != *(s2 + j))
			return (*(s1 + i) - *(s2 + j));
		i++;
		j++;
	}
	return (0);
}
