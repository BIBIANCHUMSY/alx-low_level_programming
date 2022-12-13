#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = -1 * (a % 10);

	else
		n = a % 10;
	_putchar((n % 10) + '0');

	return (n % 10);
}
