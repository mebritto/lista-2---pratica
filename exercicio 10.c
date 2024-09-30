#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    int elevado;
    int num_digitos;
    int temporaria;
    int armazena;
    int divisor;
    int i;
    int direita;
    int esquerda;


        printf("Digite um numero inteiro:\n");
            scanf("%d", &num);

      elevado = pow(num,2);
      num_digitos = 0;
      temporaria = num;

    while(temporaria > 0){

        temporaria /= 10;
        num_digitos++;

}
      armazena = 0;
      temporaria = elevado;

      while(temporaria>0){

        temporaria /= 10;
        armazena ++;
      }

      divisor =1;

    for(i =0;i<num_digitos; i++){
        divisor *=10;
    }
    direita = elevado % divisor;
    esquerda = elevado / divisor;


    if((esquerda + direita)== num){

        printf("Seu  numero eh de kaprekar.\n");

    }
      else{

        printf("Seu numero nao eh de Kaprekar.\n");
      }


return 0;

}
