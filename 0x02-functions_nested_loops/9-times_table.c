#include <stdio.h>
#include "main.h"
/*function declaration*/
void times_table(void);


/**
 * times_table - print 9 time table
 * Return: return void
 */
void times_table(void)
{
	int i = 0;
	int j = 1;
	int num = 0;

	while (i <= 9)
	{
		putchar('0');
		putchar(',');
		putchar(' ');
		while (j <= 9)
		{
			num = i * j;
			if ((num / 10) > 0)
				putchar((num / 10) + '0');
			else
				putchar(' ');
			putchar((num % 10) + '0');
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		putchar('\n');
		i++;
		j = 1;
	}
}
