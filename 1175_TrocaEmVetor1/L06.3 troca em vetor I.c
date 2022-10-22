#include <stdio.h>

int main(){
    int v[20], contador, valores, trocaValor, copiaValor;
        for(contador=0; contador<20; contador++){
        scanf("%i", &valores);
        v[contador] = valores;
        }

    for(contador=0; contador<10; contador++){
        trocaValor = 19 - contador; //calcula o índice das entradas em ordem decrescente
        copiaValor = v[contador]; //armazena valor de v[contador] para que não seja perdido
        v[contador] = v[trocaValor];
        v[trocaValor] = copiaValor;

    }
    for(contador=0; contador<20; contador++){
        printf("N[%i] = %i\n", contador, v[contador]);
    }
    return 0;
}
