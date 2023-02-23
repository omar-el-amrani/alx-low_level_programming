#include <stdio.h>
#include "main.h"
/*function declaration*/
void jack_bauer(void);


/**
 * jack_bauer - print hours and minutes
 * Return: return void
 */
void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i <= 23)
	{
		while (j <= 59)
		{
			printf("%02d:%02d\n", i, j);
			j++;
		}
		j = 0;
		i++;
	}
}
