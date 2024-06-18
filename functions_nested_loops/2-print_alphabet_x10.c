#include "main.h"
/**
*bucle para imprimir 10 veces el abedecario de la a la z
*/
void print_alphabet_x10(void)
{
    char letra;
    int i;

    for (i = 0; i < 10; i++) {  
        for (letra = 'a'; letra <= 'z'; letra++) {
            _putchar(letra);
        }
        _putchar('\n');
    }
}
