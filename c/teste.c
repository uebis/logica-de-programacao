#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("Hello World!\n");
    printf("Vamos testar se a acentua��o est� funcionando corretamente!\n");
}
