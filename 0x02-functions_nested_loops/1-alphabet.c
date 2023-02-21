#include <stdio.h>

/**
  * main - Entry program
  *
  * Return: always 0 (success)
  */
/*function declaration*/
void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print all alphabet
 * Return: always void
 */
void print_alphabet(void)
{
	printf("abcdefghijklmnopqrstuvwxyz\n");
}
