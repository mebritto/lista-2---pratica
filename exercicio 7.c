#include <stdio.h>
#include <stdlib.h>

int main(){

    int jogador;
    int computador;

    printf("escolha: \n1 - pedra\n2 - papel\n3 - tesoura\n");
    printf("digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &jogador);

    if(jogador < 1 || jogador > 3){
        printf("escolha incorreta, tente novamente");
        return 1;
    }

    computador = rand() % 3;

    printf("voce optou por: %d\ne o computador optou por: %d\n", jogador, computador);

    if(jogador == computador){
        printf("Deu empate!");
    }
    else if ((jogador) + 1 % 3 == computador){
            printf("infelizmente o computador venceu! tente na próxima");
    }
    else {
        printf("parabéns voce venceu!");
    }

    return 0;

}

