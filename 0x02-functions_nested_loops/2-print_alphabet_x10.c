#include <stdio.h>

/*function declaration*/
void print_alphabet(void);


/**
 * print_alphabet_x10 - print all alphabet
 * Return: always void
 */
void print_alphabet_x10(void)
{
	int i;

	for(	i = 0 ; i < 10 ; i++	)
	{
		printf("abcdefghijklmnopqrstuvwxyz\n");
	}
}
