#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int soma_quadrados(int n){
    int aux;
    int s;

    aux = n;

    s = 0;
    while(aux>0){
        s = s+(aux%10)*(aux%10);
        aux /= 10;
    }
    return s;
}


int main(){
    int num;
    int soma;

    printf("Digite um numero inteiro\n");
    scanf("%d", &num);

    soma = num;

    while(soma>10){
        printf("%d\n",soma);
        soma = soma_quadrados(soma);
    }


    if(soma ==1){

        printf("Seu numero eh feliz");

    }
    else{

        printf("Su numero nao eh feliz");
    }

    return 0;
}
