#include<stdio.h>
/**
*main - entry point
*
*Return: always returns 0
*/
int main(void)
{
int a;
for (a = 10; a++;)
{
putchar(a);
putchar('\n');
}
return (0);
}
