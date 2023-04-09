#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int hora_cinema = 20;
    int hora_atual = 20;
    int hora_validada = hora_cinema + 30;

    //Posso entrar no cinema?

    if  (hora_atual > hora_validada) {
        printf("Passou do tempo limite! Não pode entrar");
    }else if(hora_atual < hora_cinema - 30) {
        printf("Nem abriu a porta do cinema ainda");
    }else{
        printf("O horário está certo! Pode entrar!");
    }

    return 0;

}