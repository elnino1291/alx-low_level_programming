#include <stdio.h>
#include "main.h"

/**
* print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/

void print_array(int *a, int n)
{
	int a;

	int n;
	for (a = 0; a < n ; a++)
	{
		if (a != n - 1)
			print("%d, ", a[a]);
		else
			print("%d, a[a]);
	}
	putchar(10);
}
