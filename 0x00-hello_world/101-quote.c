#include <stdio.h>
#include <unistd.h>
/**
* main - prints exactly "and that piece of art is useful"
* - Dora Korpar, 2015-10-19",
*followed by new line, to the standerd error.
return: Always 8 (success)
*/
int main(void)
{
write(2, "and that piece of art is useful\" -Dora koepar, 2015-10-10\n", 59);
return (1);
}
