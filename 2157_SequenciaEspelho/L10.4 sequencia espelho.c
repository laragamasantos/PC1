#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int casos, inicio, fim, i, j, k, a, p, qntd, resto, valor, divisao, imprimir;
    char aux[5];
    scanf("%i", &casos);

    for(i=0; i<casos; i++){
        scanf("%i %i", &inicio, &fim);
        qntd = (fim - inicio + 1); //quantos valores existem de inicio a fim
        int v[qntd];

        k = 0;
        for(j=0; j<qntd; j++){ //PRIMEIRA METADE DO ESPELHO
            v[j] = inicio + k; //inicio a fim colocados em um vetor
            k++;
            printf("%i", v[j]);
        }


        for(j=fim; j>=inicio; j--){
            valor = j;
            while(valor != 0){
                divisao = valor/10;
                if(divisao == 0)
                    break;
                resto = valor%10;
                printf("%i", resto);
                valor = divisao;
            }
            printf("%i", valor);

        }
        printf("\n");

    }


    return 0;
}


