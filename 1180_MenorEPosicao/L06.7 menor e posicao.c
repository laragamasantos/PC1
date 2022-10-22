#include <stdio.h>

int main(){
    int tamanhoVetor, valores, contador, menorValor, posicaoMenor;
    scanf("%i", &tamanhoVetor);
    int V[tamanhoVetor];
    for(contador=0; contador<tamanhoVetor; contador++){
        scanf("%i", &V[contador]);
        if(contador==0)
            menorValor = V[0];
        if(V[contador]<menorValor){
            menorValor = V[contador];
            posicaoMenor = contador;
        }
    }

    printf("Menor valor: %i\n", menorValor);
    printf("Posicao: %i\n", posicaoMenor);

    return 0;
}
