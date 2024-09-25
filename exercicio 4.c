#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    double numero;
    double estimativa_atual = round(numero);
    double estimativa;
    int npassos = 10;
    int c;

    printf("Digite um numero inteiro e positivo:\n");
    scanf("%lf",&numero);

    estimativa = numero/2;

    c = 0;
    while (c<npassos) {
        estimativa_atual = (estimativa + numero/estimativa)/2;
        printf("%.2lf %.2lf\n", estimativa, estimativa_atual);
        estimativa = estimativa_atual;
        estimativa_atual=estimativa/2;
        c++;
    }
    printf("estimativa atual: %.2lf", estimativa);
return 0;
}
