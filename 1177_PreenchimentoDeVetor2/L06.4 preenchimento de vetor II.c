#include <stdio.h>

int main(){
    int N[1000], valorMaior, contador, valores=0;
    scanf("%i", &valorMaior);
    for(contador=0; contador<1000; contador++){
        N[contador] = valores;
        printf("N[%i] = %i\n", contador, N[contador]);
        valores = valores+1;
        if(valores>=valorMaior){
           valores = 0;
        }


    }
    return 0;
}

