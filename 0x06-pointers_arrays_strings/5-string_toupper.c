#include <stdio.h>
#include <stdlib.h>
/**
  * *string_toupper - compare two strings length
  * @str: the first var
  * Return: return char
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 97 && *(str + i) <= 122)
			*(str + i) = *(str + i) - 32;
		i++;
	}
	return (str);
}
