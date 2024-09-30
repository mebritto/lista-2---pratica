#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num;
    int soma;
    int i;

        printf("Digite um numero inteiro e positivo:\n");
            scanf("%d", &num);
    soma=0;
    i=1;

while(soma < num){

      soma += i;
       i += 1;
       }

       while(1){



        if(soma==num){

            printf("O numero eh triangular");
            break;
        }

        else if(soma>0){

            printf("O número não eh triangular");
            break;
        }

}
return 0;
}
