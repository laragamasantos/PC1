#include <stdio.h>

int encontra_impares(int X, int Y){
    int somaImpares=0;
    if(X < Y){ //se X menor que Y
        if(X%2 == 0){ //se X é par
            X+=1;
            for(X; X<Y; X+=2){ //pega os ímpares entre X e Y
                somaImpares = somaImpares+X; //soma
            }
        }else{ //se X é ímpar
            X+=2;
           for(X; X<Y; (X+=2)){ //pega os ímpares entre X e Y
                somaImpares = somaImpares+X; //soma
            }

        }

    }else if(X > Y){ //se Y menor que X
        if(Y%2 == 0){ // se Y é par
            Y+=1;
            for(Y; Y<X; (Y+=2)){
                somaImpares = somaImpares+Y;
            }
        }else{ //se Y é ímpar
            Y+=2;
           for(Y; Y<X; (Y+=2)){
                somaImpares = somaImpares+Y;
            }

        }

    }else
        somaImpares = 0;
    return somaImpares;
}


int main(){
    int X, Y;
    scanf("%i %i", &X, &Y);
    printf("%i\n", encontra_impares(X, Y));

    return 0;
}
