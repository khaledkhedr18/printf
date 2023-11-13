#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;

    len = _printf("Let's try out some conversion specifiers: %c, %s, and %%\n", 'H', "Hello, world!");
    _printf("Length of the string printed: %d\n", len);

    return (0);
}
