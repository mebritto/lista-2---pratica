#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int inverte_inteiro(int a){
    int num_dig = 0;
    int aux = a;
    int res = 0;
    int cont;

    while(aux>0){
        num_dig++;
        aux /= 10;
    }

    aux = a;
    for(cont=num_dig;cont>0;cont--){
        res=res*10+aux%10;
        aux/=10;
    }

    return res;
}


int verifica_palindromo(int a){
    return a == inverte_inteiro(a);
}


int main(){
    int num_a;
    int num_b;
    int cont;
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d",&num_a);
    printf("Digite um numero inteiro e positivo:\n");
    scanf("%d",&num_b);

    for(cont=num_a;cont<=num_b;cont++){
        if(verifica_palindromo(cont)){
            printf("%d\n",cont);
        }
    }


    return 0;
}
