#include <stdio.h>

int encontra_valores (int X, int Y){
    int soma, contador;
    if(X < Y){ //se X é o menor valor
        for(contador=X; contador<=Y; contador++){
            if(contador%13 != 0)
                soma = soma+contador;
        }
    }else{ //se Y é o menor valor
        for(contador=Y; contador<=X; contador++){
            if(contador%13 != 0)
                soma = soma+contador;
        }
    }/*else{
        if(X%13 != 0)
            soma = X;
    }*/
    return soma;
}

int main(){
    int X, Y;
    scanf("%i", &X);
    scanf("%i", &Y);
    printf("%i\n", encontra_valores(X, Y));
    return 0;
}
