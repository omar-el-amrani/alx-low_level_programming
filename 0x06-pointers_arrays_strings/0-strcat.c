#include <stdio.h>
#include <stdlib.h>
/**
  * *_strcat - concat two strings
  * @dest: the first var
  * @src: the second var
  * Return: return int
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(dest + i))
	{
		if (*(dest + i + 1) == '\0' && *(src + j) != '\0')
		{
			*(dest + i + 1) = *(src + j);
			j++;
		}
		i++;
	}
	return (dest);
}
