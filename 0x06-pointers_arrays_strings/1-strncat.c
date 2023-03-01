#include <stdio.h>
#include <stdlib.h>
/**
  * *_strncat - concat two strings n byte
  * @dest: the first var
  * @src: the second var
  * @n: the third var
  * Return: return char
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		if (*(dest + i + 1) == '\0' && *(src + j) != '\0' && j < n)
		{
			*(dest + i + 1) = *(src + j);
			j++;
		}
		i++;
	}
	return (dest);
}
