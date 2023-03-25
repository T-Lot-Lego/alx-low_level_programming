#include "main.h"

/**
*_isupper - Checks for uppercase character
*@c: argument
*Return: 1 if c,else 0
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
