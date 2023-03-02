#include <stdio.h>
/**
  * *leet - encode a string to 1337
  * @str: the first var
  * Return: return char
  */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char *sLc = "aeotlAEOTL";
	char *nLc = "4307143071";

	while (*(str + i) != '\0')
	{
		while (*(sLc + j) != '\0' && *(nLc + j) != '\0')
		{
			if (*(str + i) == *(sLc + j))
			{
				*(str + i) = *(nLc + j);
			}
			j++;
		}
		i++;
	}
	return (str);
}
