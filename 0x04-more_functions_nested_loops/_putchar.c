#include <unistd.h>
#include "main.h"
/**
*_putchar - write the character ctostdout
*@c: the character to print
*
*Return: On success 1.
*on error - 1 is returned, and error is set appropriately
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
