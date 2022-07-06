File  18 lines (15 sloc)  221 Bytes
#include "main.h"

/**
* print_alphabet - Print the alphabet in lowercase.
*using ASCII CODE
* Return: void.
*/

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
}
