#include <stdio.h>
/**
  * set_string - print diagsoms
  * @s: the first var
  * @to: the second var
  * Return: return void
  */
void set_string(char **s, char *to)
{
	int i;

	i = 0;
	while (*(s + 1) != '\0')
	{
		if (*(to + i) != '\0')
			*(s + i) = *(to + i);
		else
			*(s + i) = '\0';
		i++;
	}
}
