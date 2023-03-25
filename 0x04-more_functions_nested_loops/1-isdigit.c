#include "main.h"

/**
*_isdigit - check if uppercase character is digits
*@c: argument
*Return: 1 if is a number, else 0
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
