#include "main.h"
/**
 *
 *main - Entry point
 *
 * Return - 0 Always (Success)
 */
void print_alphabet(void)
{
	char letter;
        for (letter = 'a'; letter <= 'z'; letter++)
	_putchar(letter);
	_putchar('\n');
}
