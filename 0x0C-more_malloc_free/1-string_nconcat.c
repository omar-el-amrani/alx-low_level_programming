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
	int count, count1;
	int sign = n;
	char *str;
	int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1) - 1;
	len2 = strlen(s2) - 1;
	if (sign >= len2)
	{
		sign = len2;
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);
	for (count = 0; count < len1; count++)
	{
		str[count] = s1[count];
	}
	for (count1 = 0; count1 < sign; count1++)
	{
		str[count++] = s2[count1];
	}
	str[count++] = '\0';
	return (ptr);
}
