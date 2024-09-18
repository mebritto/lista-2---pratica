#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int numero;
    int digito;
    int a;
    float b;
    int original;
    float original_float;

    a = 1;
    digito = 0;
    b = 0;

    printf("digiete um numero inteiro e positivo: \n");
    scanf("%d", &numero);

    original = numero;
    original_float = original + 0.0;
    digito = digito + numero % 10;
    numero = numero / 10;

    while(numero > 0){
        numero = numero / 10;
        a++;
                         }

    numero = original;

    while(numero > 0){
        digito = numero % 10;
        b = b + pow(digito, a);
        numero = numero / 10;

    }

    printf("numero de digitos: %d\n", a);
    printf("calculo: %1.f\n", b);


    if(b == original_float){
        printf("seu numero eh narcisista!");
    }
    if(b != original_float){
        printf("seu numero nao eh narcisista!");
    }

    return 0;



}
