#include <stdio.h>
/**
  * *rot13 - encode a string using rot13
  * @s: the first var
  * Return: return char
  */
char *rot13(char *s)
{
	int i = 0;
	int j = 0;

	while (*(s + i) != '\0')
	{
		while (*(s + i) > 64 && *(s + i) < 91 || *(s + i) > 96 && *(s + i) < 123)
		{
			j = -13;
			if (*(s + i) > 64 && *(s + i) < 78 || *(s + i) > 96 && *(s + i) < 110)
			{
				j = 13;
			}
			*(str + i) = *(str + i) + j;
			i++;
		}
		i++;
	}
	return (str);
}
