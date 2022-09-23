#include "main.h"
#include <stdio.h>

/**
*_isupper - check if s character is uppercase or not
*character is uppercase
*
*@c: checks input of function
*
*Return: return 1 if 'c' is uppercase
*otherwise always 0 (success)
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
