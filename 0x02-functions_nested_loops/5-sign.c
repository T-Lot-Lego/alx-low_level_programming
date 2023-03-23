#include "main.h"
/**
 * print_sign - check input number
 * @n: ascii code
 * Return: 1 or else 0 or -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(43);
		return (-1);
	}
	else
	{
		_putchar(43);
		return (0);
	}
}
