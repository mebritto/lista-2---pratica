#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    int digito;
    int soma;

    printf("digite um numero inteiro: ");
    scanf("%d", &num);

    soma = 0;

    while (num > 0){
        digito = num % 10;
        soma += digito;
        num /= 10;
        }

    printf("a soma dos seus digitos será: %d\n", soma);

    return 0;


}
