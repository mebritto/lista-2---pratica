#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero;
    int contador;
    int soma_dos_divisores;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    soma_dos_divisores = 0;
    contador = 1;

    while (numero>contador){

        if (numero%contador==0) {
        soma_dos_divisores = contador + soma_dos_divisores;

        }
        contador++;
    }

        if(soma_dos_divisores==numero){
            printf("O numero eh perfeito!");
        }
        else{
            printf("O numero nao eh perfeito!");
        }



return 0;
}
