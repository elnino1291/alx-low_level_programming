#include "main.h"
#include <stdio.h>

/**
*_isupper - check if s character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, o otherwise
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
