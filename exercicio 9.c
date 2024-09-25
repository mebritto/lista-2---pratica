#include <stdio.h>
#include <stdlib.h>

int main (){

    int numero;
    int a[100] = {0};
    int soma;

    printf("digite um numero: ");
    scanf("%d", &numero);

    while(numero != 1 && !a[numero]){
        a[numero] = 1;
        soma = 0;

        for(int n = numero; n > 0; n /= 10){
            int digito = n % 10;
            soma += digito * digito;
        }
        numero = soma;
    }
        printf("%d %s numero feliz.\n", numero, numero == 1 ? "eh" : "nao eh");

return 0;
}
