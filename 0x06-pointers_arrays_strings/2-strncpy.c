#include <stdio.h>
#include <stdlib.h>
/**
  * *_strncpy - copy string into another string n byte
  * @dest: the first var
  * @src: the second var
  * @n: the third var
  * Return: return char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && *(src + i - 1) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
