#include <stdio.h>
#include <stdlib.h>

int main(){
    int qntd, i, j, contador=0, menor, troca, posicaoMenor, repetiu;

    scanf("%i", &qntd);
    int sequencia[qntd], repeticoes[qntd], ordenado[qntd];

    for(i=0; i<qntd; i++){ //cada um dos valores que será lido e colocado no vetor
        scanf("%i", &sequencia[i]);
    }

    for(i=0; i<qntd; i++){ //COLOCA EM ORDEM CRESCENTE
        menor = sequencia[i];
        posicaoMenor = i;

        for(j=i; j<qntd; j++){
            if(sequencia[j] < menor){
                menor = sequencia[j];
                posicaoMenor = j;
            }
        }
        troca = sequencia[i];
        sequencia[i] = menor;
        sequencia[posicaoMenor] = troca;
    }

    for(i=0; i<qntd; i++){ //CONTA REPETICOES DE CADA VALOR
        for(j=0; j<qntd; j++){
            if(sequencia[i] == sequencia[j])
                contador++;
        }
        repeticoes[i] = contador;

        if(i==0){ //IMPRIME DIFERENTES
            repetiu = sequencia[0];
            printf("%i aparece %i vez(es)\n", sequencia[i], repeticoes[i]);
        } else{
            if(sequencia[i] != repetiu){
                printf("%i aparece %i vez(es)\n", sequencia[i], repeticoes[i]);
                repetiu = sequencia[i];
            }
        }

        contador = 0;
    }

    return 0;
}
