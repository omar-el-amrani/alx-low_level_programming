#include <stdio.h>
/**
  * print_number - print diagonal
  * @n: this for n variable
  * Return: void
  */
void pr_int(int n) {
	if (n < 0) {
		putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_number(n / 10);
	putchar((n % 10) + '0');
}
