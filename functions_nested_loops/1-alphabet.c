#include <stdio.h>


void print_alphabet(void)
{
	char letra;

	for (letra = 'a'; letra <= 'z'; letra++) 
	{
	putchar(letra);
	}
	putchar('\n');
}
