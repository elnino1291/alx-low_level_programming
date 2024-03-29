#include "main.h"

/**
*_strcpy - copy past string
*@dest: destination
*@src: source
*
*Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
	}
	*(dest + inc) = '\0';

	return (dest);
}

