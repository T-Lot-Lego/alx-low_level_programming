#include "main.h"
/**
 * _isalpha - upper or lowercase
 * @c: Ascii code
 * Return: 1 if c, else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
