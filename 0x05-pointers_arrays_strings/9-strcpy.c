#include <stdio.h>
/**
  * *_strcpy - print str
  *
  * @dest: the first var
  * @src: the second var
  * Return: return char
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	dest[1] = '\0';
	while (*(src + i) != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
