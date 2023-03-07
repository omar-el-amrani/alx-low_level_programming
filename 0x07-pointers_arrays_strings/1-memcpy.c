#include <stdio.h>
/**
  * *_memcpy - copy n bytes from array to another
  * @dest: the first var
  * @src: the second var
  * @n: the third var
  * Return: return char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
