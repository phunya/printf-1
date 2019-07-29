#include "holberton.h"
/**
 * _printd - print any number
 * Return: void
 * @n: number
 */
void _printd(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n1 = -n;
	}
	n1 = n;
	if (n1 / 10)
		_printd(n1 / 10);
	_putchar(n1 % 10 + '0');
}
