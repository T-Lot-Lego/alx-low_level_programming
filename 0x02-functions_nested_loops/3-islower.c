#include "main.h"
/**
 * _islower - checks lower characters
 * @c: ASCII code
 * Return: 1 (success) for lowercase c, else 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
