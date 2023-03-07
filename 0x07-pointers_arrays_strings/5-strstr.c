#include <stdio.h>
/**
  * *_strstr - find string in another string
  * @haystack: the first var
  * @needle: the second var
  * Return: return char
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, t;

	j = 0;
	i = 0;
	k = 0;
	t = 0;
	while (*(haystack + i) !=  '\0')
	{
		k = i;
		j = 0;
		t = 0;
		while (*(needle + j) != '\0')
		{
			if (*(haystack + k) == *(needle + j))
				t++;
			j++;
			k++;
		}
		if (t == j)
			return (haystack + i);
		i++;
	}
	return (NULL);
}

