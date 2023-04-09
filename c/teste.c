#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Hello World!\n");
    printf("Olá da Danki");
    return 0;
}