#include <stdio.h>

int encontra_primos(int X){
    int inicial, quantidadeDivisores=0;
    for(inicial=1; inicial<=X; inicial++){
        if(X%inicial==0)
            quantidadeDivisores = quantidadeDivisores+1;
    }
    if(quantidadeDivisores==2)
        printf("%i eh primo\n", X);
    else
        printf("%i nao eh primo\n", X);
}


int main(){
    int quantidade, contador, X;
    scanf("%i", &quantidade);
    for(contador=1; contador<=quantidade; contador++){
        scanf("%i", &X);
        encontra_primos(X);
    }
    return 0;
}
