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

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	if (i == j)
		return (0);
	if (i > j)
		return (15);
	return (-15);
}
