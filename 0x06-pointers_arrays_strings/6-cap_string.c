#include <stdio.h>
#include <stdlib.h>
/**
  * *cap_string - compare two strings length
  * @str: the first var
  * Return: return char
  */
char *cap_string(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == '\t' || *(str + i) == '\n' || *(str + i) == 44)
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		if (*(str + i) == 59 || *(str + i) == 33 || *(str + i) == 40)
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		if (*(str + i) == 32)
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		if (*(str + i) == 46 || *(str + i) == 63 || *(str + i) == 34)
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		if (*(str + i) == 41 || *(str + i) == 123 || *(str + i) == 125)
			if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
				*(str + i + 1) = *(str + i + 1) - 32;
		i++;
	}
	return (str);
}
