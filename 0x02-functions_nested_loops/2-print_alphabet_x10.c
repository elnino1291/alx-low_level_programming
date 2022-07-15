#include "main.h"
/**
* a function that prints alphabet 10 times
*/
void print_alphabet(void)
{
		int i;
		char c;

		for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');
	}
}
