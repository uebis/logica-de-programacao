#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    int ano_nascimento = 1994;
    int ano_atual = 2023;
    int resultado = (ano_atual - ano_nascimento);

    printf("A Andrezza tem %d anos.",resultado);
    return 0;
}