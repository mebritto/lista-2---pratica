#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    int hora_inicial;
    int minuto_inicial;
    int duracao_hora;
    int duracao_minuto;
    int soma_hora;
    int soma_minuto;


    printf("Digite a hora inicial:\n");
    scanf("%d:%d",&hora_inicial,&minuto_inicial);
    printf("Digite a duracao:\n");
    scanf("%d:%d",&duracao_hora,&duracao_minuto);

    soma_minuto = minuto_inicial + duracao_minuto;
    soma_hora= hora_inicial + duracao_hora + soma_minuto/60;

    soma_minuto%=60;
    soma_hora %=24;

    printf("A hora de termino no relogio eh: %02d:%02d\n",soma_hora,soma_minuto);
return 0;
}
